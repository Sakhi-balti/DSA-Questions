#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // leecode problem 11.
    vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = nums.size();
    int maxArea = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int w = j - i;
            int h = min(nums[i], nums[j]);
            int currArea = w * h;
            maxArea = max(currArea, maxArea);
        }
    }
    cout << "maximum storage area:" << maxArea;

    return 0;
}