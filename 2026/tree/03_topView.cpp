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
void topView(Node *root)
{
    queue<pair<Node *, int>> Q;
    map<int, int> m;

    Q.push({root, 0});

    while (Q.size() > 0)
    {
        Node *curr = Q.front().first;
        int dist = Q.front().second;
        if (m.find(dist) == m.end())
        {
            m[dist] = curr->data;
        }
        Q.pop();

        if (curr->left != NULL)
        {
            Q.push({curr->left, dist - 1});
        }
        if (curr->right != NULL)
        {
            Q.push({curr->right, dist + 1});
        }
    }
    for (auto it : m)
    {
        cout << it.second << " ";
    }
}
int main()
{

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = binaryTree(preorder);
    topView(root);
    return 0;
}