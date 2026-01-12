
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //    peak value or mountain array
    vector<int> nums = {1, 2, 4, 5, 6, 1, 0};
    int n = nums.size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
        {
            cout << mid;
            break;
        }
        else if (nums[mid - 1] < nums[mid] && nums[mid] < nums[mid + 1])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return 0;
}