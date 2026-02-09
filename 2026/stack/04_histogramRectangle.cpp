#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        vector<int> right(heights.size(), 0);
        vector<int> left(heights.size(), 0);
        stack<int> s;

        // Right smaller values
        int n = heights.size();
        for (int i = n - 1; i >= 0; i--)
        {
            while (s.size() > 0 && heights[s.top()] >= heights[i])
            {
                s.pop();
            }
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }
        // remove all elements
        while (!s.empty())
        {
            s.pop();
        }

        // Left smaller values
        for (int i = 0; i < n; i++)
        {
            while (s.size() > 0 && heights[s.top()] >= heights[i])
            {
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        long long maxArea = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            long long width = right[i] - left[i] - 1;
            long long currArea = (long long)heights[i] * width;
            maxArea = max(currArea, maxArea);
        }

        return (int)maxArea;
    }
};
int main()
{
    Solution solve;
    vector<int> arr = {5, 3, 5, 5, 4, 1, 3, 1};
    cout << "The largest area size: " << solve.largestRectangleArea(arr);

    return 0;
}