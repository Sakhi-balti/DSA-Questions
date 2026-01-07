#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &nums, int n, int m, int mid)
{
    int numStu = 1, currentPages = 0;

    for (int i = 0; i < n; i++)
    {
        if (currentPages + nums[i] <= mid)
        {
            currentPages += nums[i];
        }
        else
        {
            numStu++;
            currentPages = nums[i];

            if (numStu > m)
                return false;
        }
    }
    return true;
}

int allocation(vector<int> &nums, int n, int m)
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
{ // Book Allocation Problem
    vector<int> nums = {10, 20, 30, 40, 50};
    int n = nums.size();
    int students = 2;
    int result = allocation(nums, n, students);
    cout << result;
    return 0;
}