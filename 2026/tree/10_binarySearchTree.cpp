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
Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}
// This is special for binary search;
Node *buildBinaryTree(vector<int> &nums)
{
    Node *root = NULL;
    for (int val : nums)
    {
        root = insert(root, val);
    }
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
// Binary search
bool search(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    if (root->data < key)
    {
        return search(root->right, key);
    }
    else
    {
        return search(root->left, key);
    }
}
int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    Node *root = buildBinaryTree(nums);
    inorder(root);
    int key = 4;
    cout << "\n " << search(root, key);
    return 0;
}