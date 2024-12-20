#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    // Using the slow_fast approch/concept not the unordered set.
    int n = nums.size();
    int slow = nums[0], fast = nums[0];
    do
    {
        slow = nums[slow];       //+1
        fast = nums[nums[fast]]; //+2
    } while (slow != fast);
    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main()
{
    vector<int> arr = {3, 1, 4, 2, 1};
    cout << findDuplicate(arr);
    return 0;
}