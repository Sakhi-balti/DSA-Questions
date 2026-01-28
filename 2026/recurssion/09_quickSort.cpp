#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &nums, int st, int end)
{

    int pivot = nums[end];
    int idx = st - 1;
    for (int j = st; j < end; j++)
    {
        if (nums[j] <= pivot)
        {
            idx++;
            swap(nums[idx], nums[j]);
        }
    }
    idx++;
    swap(nums[idx], nums[end]);
    return idx;
}
void QuickSort(vector<int> &nums, int st, int end)
{
    if (st < end)
    {
        int pivotIdx = partition(nums, st, end);

        // Left part

        QuickSort(nums, st, pivotIdx - 1);
        QuickSort(nums, pivotIdx + 1, end);
    }
}
int main()
{
    vector<int> nums = {19, 12, 20, 14, 23, 16, 5, 22};
    int st = 0, end = nums.size() - 1;

    QuickSort(nums, st, end);
    for (int val : nums)
    {
        cout << val << " ";
    }
    return 0;
}