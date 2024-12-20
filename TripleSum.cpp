#include <iostream>
#include <set>
#include <vector>
#include <algorithm> // Include this for std::sort
using namespace std;

vector<vector<int>> TripleValue(vector<int> &num)
{

    vector<vector<int>> ans;
    sort(num.begin(), num.end());
    int n = num.size();
    for (int i = 0; i < n; i++)
    {
        // using two pointers Approch
        if (i > 0 && num[i] == num[i - 1])
            continue;
        int l = i + 1, r = n - 1; // left and right pointers
        while (l < r)
        {
            int sum = num[i] + num[l] + num[r];
            if (sum == 0)
            {
                ans.push_back({num[i], num[l], num[r]});
                l++;
                r--; // increment left and decrement right pointers
            }
            else if (sum > 0)
            {
                r--; // decrement right pointer if sum is greater than 0
            }
            else
            {
                l++;
                while (l < r && num[l] == num[l - 1])
                    l++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, -2, 3, 2, 1, -1};
    vector<vector<int>> result = TripleValue(arr);

    // Print the result
    for (const auto &triple : result)
    {
        cout << "[" << triple[0] << ", " << triple[1] << ", " << triple[2] << "]" << endl;
    }

    return 0;
}