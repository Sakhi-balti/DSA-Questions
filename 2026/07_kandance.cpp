#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{

    // Kandance Algorithem for maximun subarray sum
    // leetcode problems
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = nums.size();
    int curSum = 0, maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {

        curSum += nums[st];
        maxSum = max(curSum, maxSum);
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    cout << "MaxSum Value: " << maxSum;

    return 0;
}