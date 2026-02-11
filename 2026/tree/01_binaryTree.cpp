#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node *buildBinary(vector<int> &preorder)
{
    idx++;
    if (preorder[idx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preorder[idx]);
    root->left = buildBinary(preorder);
    root->right = buildBinary(preorder);

    return root;
}
void preTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preTraversal(root->left);
    preTraversal(root->right);
}
void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
void postTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postTraversal(root->left);
    postTraversal(root->right);
    cout << root->data << " ";
}
// LEVEL ORDER TREVERSAL
void levelOrderTraversal(Node *root)
{
    queue<Node *> Q;
    Q.push(root);
    while (Q.size() > 0)
    {
        Node *curr = Q.front();
        Q.pop();
        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            Q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            Q.push(curr->right);
        }
    }
}
int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildBinary(preorder);
    preTraversal(root);
    cout << endl;
    inorderTraversal(root);
    cout << endl;
    postTraversal(root);
    cout << endl;
    levelOrderTraversal(root);
    return 0;
}