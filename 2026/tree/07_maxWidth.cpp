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
Node *buildTree(vector<int> &nums)
{
    idx++;
    if (nums[idx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(nums[idx]);

    root->left = buildTree(nums);
    root->right = buildTree(nums);
    return root;
}

int maxWidth(Node *root)
{
    if (!root)
        return 0;

    queue<pair<Node *, int>> Q;
    Q.push({root, 0});
    int maxWidth = 0;

    while (Q.size() > 0)
    {
        int levelSize = Q.size();
        int stIdx = Q.front().second;
        int endIdx = Q.back().second;
        int currWidth = endIdx - stIdx + 1;
        maxWidth = max(maxWidth, currWidth);

        for (int i = 0; i < levelSize; i++)
        {
            pair<Node *, int> curr = Q.front();
            Q.pop();

            if (curr.first->left)
            {
                Q.push({curr.first->left, curr.second * 2 + 1});
            }
            if (curr.first->right)
            {
                Q.push({curr.first->right, curr.second * 2 + 2});
            }
        }
    }

    return maxWidth;
}
int main()
{

    return 0;
}