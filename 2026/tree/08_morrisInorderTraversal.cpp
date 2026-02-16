#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int data)
    {
        val = data;
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
vector<int> inorderTraversal(Node *root)
{
    vector<int> ans;
    Node *curr = root;

    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            ans.push_back(curr->val);
            curr = curr->right;
        }
        else
        {
            // Find the inorder predecessor (IP)
            Node *IP = curr->left;
            while (IP->right != NULL && IP->right != curr)
            {
                IP = IP->right;
            }

            if (IP->right == NULL)
            {                     // ← FIXED: was != NULL
                IP->right = curr; // Create threaded link
                curr = curr->left;
            }
            else
            {                     // IP->right == curr
                IP->right = NULL; // Remove threaded link
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
    }
    return ans;
}
int main()
{

    vector<int> preorder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = binaryTree(preorder);
    vector<int> ans = inorderTraversal(root);
    return 0;
}