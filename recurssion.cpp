#include <iostream>
#include <vector>
using namespace std;
// binary search problem solve by recurssion
int binarySearch(vector<int> num, int target, int st, int end)
{
    if (st <= end)
    {

        int mid = st + (end - st) / 2;
        if (num[mid] == target)
        {
            return mid;
        }
        else if (target < num[mid])
        {
            return binarySearch(num, target, st, mid - 1);
        }
        else
        {
            return binarySearch(num, target, mid + 1, end);
        }
    }
    return -1;
}
// check the arr are sort or not

// bool checkArray(int arr[], int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
//     return arr[n - 1] >= arr[n - 2] && checkArray(arr, n - 1);
// }
int main()
{
    // first question
    vector<int> num = {11, 12, 14, 16, 17};
    int st = 0;
    int end = num.size() - 1;
    int target = 17;
    cout << binarySearch(num, target, st, end);
    // second question
    // int arr[5] = {12, 13, 210, 32, 43};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << checkArray(arr, n) << endl;
}