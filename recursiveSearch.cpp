#include <iostream>
#include <vector>
using namespace std;
int recursive_fun(vector<int> &arr, int target, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target < arr[mid])
        {
            return recursive_fun(arr, target, st, mid - 1);
        }
        else if (target > arr[mid])
        {
            return recursive_fun(arr, target, mid + 1, end);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 4, 6, 8, 9, 10, 12, 14, 15};
    int target = 2;
    int st = 0;
    int end = arr.size() - 1;
    cout << recursive_fun(arr, target, st, end);
}