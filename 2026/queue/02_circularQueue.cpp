#include <iostream>
#include <vector>
using namespace std;

class CircularQueue
{
    int *arr;
    int f, r;
    int currSize;
    int size;

public:
    CircularQueue(int cap)
    {
        size = cap;
        currSize = 0;
        f = 0;
        r = -1;
        arr = new int[size];
    }

    void push(int data)
    {
        if (currSize == size)
        {
            cout << "queue are full" << endl;
            return;
        }

        r = (r + 1) % size;
        arr[r] = data;
        currSize++;
    }
    void pop()
    {
        if (empty())
        {
            cout << " Our queue is empty";
            return;
        }
        else
        {
            f = (f + 1) % size;
            currSize--;
        }
    }
    int front()
    {
        if (empty())
        {
            cout << " Our queue is empty";
            return -1;
        }
        else
        {
            return arr[f];
        }
    }
    bool empty()
    {
        return currSize == 0;
    }
    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    CircularQueue qe(3);
    qe.push(12);
    qe.push(90);
    qe.push(33);
    qe.pop();
    qe.push(11);
    // qe.push(88);
    qe.printArray();
    cout << endl;
    while (!qe.empty())
    {
        cout << qe.front() << " ";
        qe.pop();
    }
    return 0;
}