#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

void backtracking(vector<int> &num, vector<int> &res, int start, vector<vector<int>> &allSubsets)
{
    allSubsets.push_back(res); // Add the current subset to the result

    for (int i = start; i < num.size(); i++)
    {
        // Skip duplicates
        if (i > start && num[i] == num[i - 1])
        {
            continue;
        }
        res.push_back(num[i]);                     // Include the current element
        backtracking(num, res, i + 1, allSubsets); // Move to the next element
        res.pop_back();                            // Exclude the current element
    }
}

vector<vector<int>> subsetOfdup(vector<int> &num)
{
    vector<vector<int>> allSubsets;
    vector<int> res;
    sort(num.begin(), num.end()); // Sort to handle duplicates
    backtracking(num, res, 0, allSubsets);
    return allSubsets;
}

int main()
{
    // Print all subset values with duplicate values
    vector<int> arr = {1, 2, 2, 3};
    vector<vector<int>> res = subsetOfdup(arr);
    for (const auto &subset : res)
    {
        cout << "{";
        for (size_t j = 0; j < subset.size(); j++)
        {
            cout << subset[j];
            if (j < subset.size() - 1)
            {
                cout << ",";
            }
        }
        cout << "}" << endl;
    }

    return 0;
}