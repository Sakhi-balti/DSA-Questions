#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> &arr, int st, int mid, int end)
{
    int i = st, j = mid + 1;
    vector<int> temp;
    int inver_count = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
            inver_count += mid - i + 1;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {

        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + st] = temp[idx];
    }
    return inver_count;
}
int merSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        int left_inver = merSort(arr, st, mid);       // left part
        int right_inver = merSort(arr, mid + 1, end); // right part
        int curr_inver = merge(arr, st, mid, end);

        return (left_inver) + (right_inver) + (curr_inver);
    }
    return 0;
}
int main()
{
    vector<int> arr = {6, 3, 5, 2, 7};
    int ans = merSort(arr, 0, arr.size() - 1);
    cout << "invertor count:" << ans;
    return 0;
}