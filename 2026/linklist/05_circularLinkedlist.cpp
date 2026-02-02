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
    void insertTail(int val)
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
            tail->next = newNode;
            tail = newNode;
        }
    }
    void deleteAtHead()
    {
        if (head == NULL)
            return;
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {

            Node *temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
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
    cll.insertTail(12);
    cll.insertTail(13);
    cll.insertTail(14);
    cll.insertTail(15);
    cll.deleteAtHead(); // 12 will remove
    cll.print();
    return 0;
}