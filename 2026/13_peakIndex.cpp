
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // leetcode 852;
    //  Peak Index in Mountain Array
    int arr[] = {2, 3, 5, 7, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
        cout << mid;
        return 0;
    }
    return 0;
}