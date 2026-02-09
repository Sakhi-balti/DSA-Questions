#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Rain Trapping
int rainTrapping(vector<int> &nums)
{
    int n = nums.size();
    // calculate left maximum valuse
    vector<int> lmax(n, 0);
    lmax[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], nums[i]);
    }
    // calculate right maximum values
    vector<int> rmax(n, 0);
    rmax[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], nums[i]);
    }
    // calculate the answers
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(lmax[i], rmax[i]) - nums[i];
    }
    return ans;
}
int main()
{
    vector<int> nums = {4, 2, 0, 3, 5};
    cout << "Space avaibale: " << rainTrapping(nums) << endl;
    return 0;
}