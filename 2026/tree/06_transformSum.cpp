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
// convert node with sum values
int sumTransform(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftSum = sumTransform(root->left);
    int rightSum = sumTransform(root->right);
    root->data += leftSum + rightSum;
    return root->data;
}
int main()
{

    vector<int> preorder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = binaryTree(preorder);
    cout << "root sum /: " << sumTransform(root);
    return 0;
}
