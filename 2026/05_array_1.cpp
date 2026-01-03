
#include <iostream>
#include <vector>
using namespace std;
int linerSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
// Reverse the array
void reversArray(int arr[], int sz)
{
    // using two pointer approch
    int str = 0, end = sz - 1;
    while (str < end)
    {
        swap(arr[str], arr[end]);
        str++, end--;
    }
}
int main()
{
    int size = 7;
    int arr[size] = {33, 44, 22, 55, 32, 24, 11};
    reversArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\ntarget value (24) index: " << linerSearch(arr, size, 24) << endl;
    return 0;
}