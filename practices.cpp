#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            int l = j + 1;
            int r = n - 1;
            while (l < r)
            {
                long long sum = nums[i] + nums[j] + nums[l] + nums[r];
                if (sum < target)
                    l++;
                else if (sum > target)
                    r--;
                else
                {
                    res.push_back({nums[i], nums[j], nums[l], nums[r]});
                    r--;
                    l++;
                    while (l < r && nums[l] == nums[l - 1])
                        l++;
                    while (l < r && nums[r] == nums[r + 1])
                        r--;
                }
            }
        }
    }
    return res;
}
int main()
{
    vector<int> num = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> res = fourSum(num, target);
    for (auto &el : res)
    {
        cout << "[";
        for (auto &el2 : el)
        {
            cout << el2 << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}