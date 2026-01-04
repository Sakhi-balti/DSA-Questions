#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int st = 0, end = n - 1;
    while (st < end)
    {
        int pairSum = nums[st] + nums[end];
        if (pairSum < target)
        {
            st++;
        }
        else if (pairSum > target)
        {
            end--;
        }
        else
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}
int main()
{

    vector<int> num = {2, 7, 11, 14};

    int target = 13;
    vector<int> ans = pairSum(num, target);
    cout << "first index : " << ans[0] << " second index : " << ans[1];
    return 0;
}