#include <iostream>
#include <vector>
#include <queue>
#include <map>
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
// Kth Elememt are print
void kthElement(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 1)
    {
        cout << root->data << " ";
    }
    kthElement(root->left, k - 1);
    kthElement(root->right, k - 1);
}
int main()
{

    vector<int> preorder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = binaryTree(preorder);
    kthElement(root, 3);
    return 0;
}