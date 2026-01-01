#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> arr;
    arr.push(1);
    arr.push(2);
    arr.push(3);

    cout << "last element of array: " << arr.back() << endl;

    while (!arr.empty())
    {
        cout << arr.front() << endl;
        arr.pop();

        if (!arr.empty())
        {
            cout << "Next back element: " << arr.back() << endl;
        }
    }
}
