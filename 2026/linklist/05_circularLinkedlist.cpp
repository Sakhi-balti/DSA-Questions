#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class CircularList
{
private:
    Node *head;
    Node *tail;

public:
    CircularList()
    {
        head = tail = NULL;
    }
    void insertHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void print()
    {
        cout << head->data << " ";
        Node *temp = head->next;
        while (temp != head)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data;
    }
};
int main()
{
    CircularList cll;
    cll.insertHead(12);
    cll.insertHead(13);
    cll.insertHead(14);
    cll.insertHead(15);
    cll.print();
    return 0;
}