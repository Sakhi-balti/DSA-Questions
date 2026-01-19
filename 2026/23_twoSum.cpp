#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// This is Bruteforce approch
pair<int, int> twoSum(vector<int> nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return make_pair(i, j);
            }
        }
    }
}
// using binary search
pair<int, int> TwoSum(vector<int> nums, int target)
{
    // sort the arry
    sort(nums.begin(), nums.end());
    int st = 0, end = nums.size() - 1;
    while (st <= end)
    {

        if (nums[st] + nums[end] == target)
            return make_pair(st, end);
        else if (nums[st] + nums[end] > target)
            end--;
        else
            st++;
    }
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    pair<int, int> result = twoSum(nums, target);
    cout << "first element: " << result.first << endl;
    cout << "second element: " << result.second << endl;

    return 0;
}