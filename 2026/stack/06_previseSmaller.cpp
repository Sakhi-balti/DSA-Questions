#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void prevSmaller(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() > nums[i])
        {
            s.pop();
        }
        ans[i] = s.empty() ? -1 : s.top();
        s.push(nums[i]);
    }
    // print all result
    for (int val : ans)
    {
        cout << val << " ";
    }
}
int main()
{
    vector<int> nums = {3, 2, 5, 7, 8};
    prevSmaller(nums);
}