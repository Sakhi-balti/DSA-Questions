#include <iostream>
#include <vector>
using namespace std;
void merg(vector<int> &nums, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (nums[i] <= nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(nums[j]);
        j++;
    }
    // stor the original
    for (int idx = 0; idx < temp.size(); idx++)
    {
        nums[idx + st] = temp[idx];
    }
}
// void helper()
void mergSort(vector<int> &nums, int st, int end)
{

    if (st >= end)
    {
        return;
    }
    int mid = st + (end - st) / 2;
    mergSort(nums, st, mid);      // Left part
    mergSort(nums, mid + 1, end); // Right part

    merg(nums, st, mid, end);
}
int main()
{
    vector<int> nums = {14, 12, 26, 16, 13, 19, 9};
    int st = 0;
    int end = nums.size() - 1;
    mergSort(nums, st, end);
    for (int val : nums)
    {
        cout << val << " ";
    }
    return 0;
}