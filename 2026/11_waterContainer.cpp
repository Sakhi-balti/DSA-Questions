#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // leecode problem 11.
    vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = nums.size();
    int maxWater = 0;
    int st = 0, end = n - 1;
    while (st < end)
    {
        int width = end - st;
        int height = min(nums[st], nums[end]);
        int currWater = width * height;
        maxWater = max(maxWater, currWater);
        nums[st] < nums[end] ? st++ : end--;
    }
    cout << "maximum storage area:" << maxWater;

    return 0;
}