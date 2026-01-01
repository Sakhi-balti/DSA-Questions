#include <iostream>
#define MAX_size 10 // define the maximum size of the stack
using namespace std;

int top = -1;
int stack[MAX_size];

void push(int item)
{
    if (top >= MAX_size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        stack[++top] = item;
        cout << "Pushed item: " << item << endl;
    }
}

void pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        int item = stack[top--];
        cout << "Popped item: " << item << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack items: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice, item;
    cout << "1. Push\n2. Pop\n3. Display\n4. Exit" << endl;

    while (true)
    {
        cout << "Enter your choice: ";
        cin >> choice; // Read user choice

        switch (choice)
        {
        case 1:
            cout << "Enter the push value: ";
            cin >> item;
            push(item);
            break; // Add break to prevent fall-through
        case 2:
            pop();
            break; // Add break to prevent fall-through
        case 3:
            display();
            break; // Add break to prevent fall-through
        case 4:
            cout << "Exiting..." << endl;
            return 0; // Exit the program
        default:
            cout << "Invalid choice" << endl;
            break; // Add break for default case
        }
    }
}