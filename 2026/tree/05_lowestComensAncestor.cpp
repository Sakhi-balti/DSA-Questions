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
// lowest common ancestor
Node *LCA(Node *root, int p, int q)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == p || root->data == q)
    {
        return root;
    }
    Node *leftLCA = LCA(root->left, p, q);
    Node *rightLCA = LCA(root->right, p, q);

    if (leftLCA && rightLCA)
    {
        return root;
    }
    else if (leftLCA != NULL)
    {
        return leftLCA;
    }
    else
    {
        return rightLCA;
    }
}
int main()
{

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildBinary(preorder);
    Node *lca = LCA(root, 4, 5);
    cout << "LCA: " << lca->data;
    return 0;
}