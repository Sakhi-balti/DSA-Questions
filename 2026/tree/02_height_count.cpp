#include <iostream>
#include <vector>
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
Node *binaryTree(vector<int> &preorder)
{
    idx++;
    if (preorder[idx] == -1)
        return NULL;
    Node *root = new Node(preorder[idx]);
    root->left = binaryTree(preorder);
    root->right = binaryTree(preorder);
    return root;
}
// preOrder Traversal
void preOrder_Traversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder_Traversal(root->left);
    preOrder_Traversal(root->right);
}
// calculate the Height of Tree
int height(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right) + 1;
}
// calculate the count of Node
int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = count(root->left);
    int right = count(root->right);
    return left + right + 1;
}
// sum of all node value or data
int sum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = sum(root->left);
    int right = sum(root->right);
    return left + right + root->data;
}
int main()
{

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = binaryTree(preorder);
    preOrder_Traversal(root);
    cout << "\nMaximumn height of Tree: " << height(root) << endl;
    cout << "Number of Node in a Tree: " << count(root) << endl;
    cout << "sum of all node: " << sum(root) << endl;
    return 0;
}