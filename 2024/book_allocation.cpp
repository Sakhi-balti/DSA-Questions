#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> &arr, int n, int m, int maxallotpage)
{
    int pages = 0;
    int student = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxallotpage)
        {
            return false;
        }
        if (pages + arr[i] <= maxallotpage)
        {
            pages += arr[i];
        }
        else
        {
            student++;
            pages = arr[i];
        }
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
    int st = 0, end = sum;
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        { // right side move on
            ans = mid;
            end = mid - 1;
        }
        else
        { // if mid is not valid
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> v1 = {2, 1, 3, 4};
    int n = v1.size(), m = 5;
    cout << bookallocation(v1, n, m);
    return 0;
}