#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &nums, int N, int C, int mid)
{

    int cows = 1;
    int lastInstall = nums[0];
    for (int i = 1; i < N; i++)
    {
        if (nums[i] - lastInstall >= mid)
        {
            cows++;
            lastInstall = nums[i];
        }
        if (cows == C)
        {
            return true;
        }
    }
    return false;
}
int getDistance(vector<int> &nums, int N, int C)
{
    // sort the array
    sort(nums.begin(), nums.end());

    int st = 1, end = nums[N - 1] - nums[0];
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st);
        if (isPossible(nums, N, C, mid))
        {
            st = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{

    vector<int> nums = {1, 2, 8, 4, 9};
    int N = nums.size();
    int C = 3;
    int result = getDistance(nums, N, C);
    cout << "min large distanc: " << result;
    return 0;
}