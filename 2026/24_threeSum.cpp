#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>

using namespace std;
// Brute Force approch
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size();
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    {
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end());
                        if (s.find(triplet) == s.end())
                        {

                            s.insert(triplet);
                            ans.push_back(triplet);
                        }
                    }
                }
        }
    }

    return ans;
}
// Hashing Approch
vector<vector<int>> ThreeSum(vector<int> nums)
{
    vector<int> ans;
    int n = nums.size();
    // a + b = -c
    for (int i = 0; i < n; i++)
    {
        int tar = nums[i];
        for (int j)
    }
}
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    for (auto values : result)
    {
        cout << values[1] << endl;
        cout << values[2] << endl;
    }

    return 0;
}