#include <iostream>
#include <vector>
using namespace std;
bool isValide(vector<int> &arr, int n, int m, int mid)
{
    int student = 1, page = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (page + arr[i] <= mid)
        {
            page += arr[i];
        }
        else
            student++;
        page = arr[i];
    }
    return student > m ? false : true;
}

int bookallocation(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int str = 0, end = sum; // range of possible answer
    int ans = -1;

    while (str <= end)
    {
        int mid = str + (end - str) / 2;
        if (isValide(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            str = mid + 1;
        }
    }
    return ans; // return the maximum pages that can be allocated
}
int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = arr.size(); // number of book is 4
    int m = 2;          // total number of  students is 2
    cout << bookallocation(arr, n, m);
    return 0;
}