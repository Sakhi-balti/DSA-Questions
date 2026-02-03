#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int val) : data(val), next(nullptr) {}
    Node(int val, Node *next) : data(val), next(nullptr) {}
};

class Solution
{

public:
    Node *reversKgroup(Node *head, int k)
    {
        Node *temp = head;
        int count = 0;
        // check k node exist or not
        while (count < k)
        {
            if (temp == NULL)
            {
                return head;
            }
            temp = temp->next;
            count++;
        }
        // call the rest of group
        Node *prev = reversKgroup(temp, k);

        // reveser current group;
        temp = head;
        int count = 0;
        while (count < k)
        {
            Node *next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            count++;
        }
        return prev;
    }
};

main()
{
    // leetcode question no = 25
    return 0;
}