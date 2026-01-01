#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPosible(vector<int> &arr, int n, int m, int k)
{
    int painter = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k)
        {
            return false;
        }
        if (time + arr[i] <= k)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m ? true : false;
}
int painter_partition(vector<int> &arr, int n, int m)
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
    int st = 40, end = sum;
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPosible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {20, 20, 20, 20};
    // auto maxelement = max_element(arr.begin(), arr.end()); // Output: 40
    // cout << *maxelement; // Output: 40
    int n = arr.size();
    int m = 2;
    cout << "minimun time taken :" << painter_partition(arr, n, m);
}