#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int st, int end)
{
    int pivot = arr[end];
    int i = st - 1;
    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end]);
    return i;
}
void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int idx = partition(arr, st, end);
        quickSort(arr, st, idx - 1);  // left part
        quickSort(arr, idx + 1, end); // right part
    }
}
int main()
{
    vector<int> arr = {5, 6, 2, 4, 1, 3};
    quickSort(arr, 0, arr.size() - 1);
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}