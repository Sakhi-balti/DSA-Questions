#include <iostream>
#include <vector>
using namespace std;
// implementation of queue
class Node
{
public:
    Node *next;
    Node *prev;
    int data;
    Node(int val)
    {
        data = val;
        prev = next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }
    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        if (empty())
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void dequeue()
    {
        if (empty())
        {
            cout << "queue is empty ";
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    int front()
    {
        if (empty())
        {
            cout << "queue is empty: ";
        }
        return head->data;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    Queue q;
    q.enqueue(90);
    q.enqueue(22);
    q.enqueue(11);
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front();
    return 0;
}