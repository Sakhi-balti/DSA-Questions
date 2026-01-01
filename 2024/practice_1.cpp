#include <iostream>
#include <vector>
using namespace std;
int binarysearch(int arr[], int target)
{
    int str = 0;
    int size = 9;
    int end = size - 1;
    while (str <= end)
    {
        int mid = (str + end) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
            (target > arr[mid])
            {
                str = mid + 1;
            }
    }
    return -1;
}
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int str = 0;
    int end = 8;
    binarysearch(arr, 7, str, end);
    return 0;
}