#include <iostream>
#include <stack>
using namespace std;
void printstack(stack<int> &arr)
{
    while (!arr.empty())
    {
        cout << arr.top() << endl;
        arr.pop();
    }
}

int main()

{
    stack<int> arr;
    arr.push(12);
    arr.push(13);
    arr.push(43);
    // int size = arr.size();
    // while (!arr.empty())
    // {
    //     cout << arr.top() << endl;
    //     arr.pop();
    // }
    printstack(arr);
}