#include <iostream>
#include <vector>
using namespace std;

int merg(vector<int> &arr, int st, int end, int mid)
{
    vector<int> temp;
    int i = st;
    int j = mid + 1;
    int count = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            count += (mid - i + 1);
            j++;
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
    return count;
}
int mergSort(vector<int> &arr, int st, int end)
{
    // perform mersort and get inverscont

    if (st < end)
    {

        // left half
        int mid = st + (end - st) / 2;
        int left = mergSort(arr, st, mid);
        int right = mergSort(arr, mid + 1, end);

        int mrg = merg(arr, st, end, mid);

        return left + right + mrg;
    }
    return 0;
}
int main()
{
    vector<int> arr = {
        6,
        3,
        5,
        2,
        7,
    };
    int st = 0, end = arr.size() - 1;
    int count = mergSort(arr, st, end);
    cout << "Total InverCount: " << count << endl;
    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}