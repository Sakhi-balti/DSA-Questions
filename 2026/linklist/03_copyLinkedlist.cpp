#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *random;
    Node(int val) : data(val), next(NULL), random(NULL) {}
};
struct CopyLinkedList
{

    Node *copyRandomList(Node *head)
    {
        if (head == NULL)
            return NULL;
        unordered_map<Node *, Node *> m;
        Node *newHead = new Node(head->data);
        Node *tempOld = head->next;
        Node *tempNew = newHead;

        m[head] = newHead;
        // copy pointer
        while (tempOld != NULL)
        {
            Node *copyNode = new Node(tempOld->data);
            m[tempOld] = copyNode;
            tempNew->next = copyNode;
            tempNew = tempNew->next;
            tempOld = tempOld->next;
        }
        tempOld = head;
        tempNew = newHead;
        while (tempOld != NULL)
        {
            tempNew->random = m[tempOld->random];
            tempNew = tempNew->next;
            tempOld = tempOld->next;
        }
        return newHead;
    }
};

int main()
{

    return 0;
}