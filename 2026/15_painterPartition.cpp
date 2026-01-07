#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &nums, int n, int m, int mid)
{
    int n_painter = 1;
    int currTime = 0;
    for (int i = 0; i < n; i++)
    {
        if (currTime + nums[i] <= mid)
        {
            currTime += nums[i];
        }
        else
        {
            n_painter++;
            currTime = nums[i];
            if (n_painter > m)
                return false;
        }
    }
    return true;
}

int numTime(vector<int> &nums, int n, int m)
{
    if (m > n)
        return -1;
    int st = 0, end = 0;
    for (int i = 0; i < n; i++)
    {

        end += nums[i];
    }
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(nums, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{

    vector<int> nums = {15, 17, 12, 20};
    int n = nums.size();
    int painters = 3;
    int result = numTime(nums, n, painters);
    cout << "minimum Time Take to finish: " << result;
    return 0;
}