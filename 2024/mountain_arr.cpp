#include <iostream>
#include <vector>
using namespace std;
int pick_Index(vector<int> &A)
{
    int str = 1; // start index and end never find the pick value
    int n = A.size();
    int end = n - 2;
    while (str <= end)
    {
        int mid = str + (end - str) / 2;
        if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
        {
            return mid;
        }
        else if (A[mid - 1] < A[mid])
        {
            str = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    vector<int> vec = {3, 5, 8, 9, 7, 2};
    cout << pick_Index(vec);
    return 0;
}