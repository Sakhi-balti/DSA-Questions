#include <iostream>
#include <vector>
using namespace std;

int subArrSum(vector<int> &nums, int tar)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == tar)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{

    vector<int> nums = {9, 4, 20, 3, 10, 5};
    int tar = 33;
    cout << subArrSum(nums, tar) << endl;
    return 0;
}