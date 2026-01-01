#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &arr, int idx, int target, vector<vector<int>> &ans, vector<int> &combin)
{
    if (target == 0)
    {
        ans.push_back(combin); // Push a copy of combin
        return;
    }
    if (idx == arr.size() || target < 0)
    {
        return;
    }

    // Single inclusion
    combin.push_back(arr[idx]);
    solve(arr, idx, target - arr[idx], ans, combin); // Allow multiple inclusion
    combin.pop_back();                               // Backtrack

    // Exclusion
    solve(arr, idx + 1, target, ans, combin);
}

vector<vector<int>> combinSum(vector<int> &arr, int target)
{
    vector<vector<int>> ans;
    vector<int> combin;
    solve(arr, 0, target, ans, combin);
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 5};
    int target = 8;
    vector<vector<int>> result = combinSum(arr, target);
    for (auto ele : result)
    {
        cout << '[';
        for (int value : ele)
        {
            cout << value << " ";
        }
        cout << "]\n";
    }
    return 0;
}