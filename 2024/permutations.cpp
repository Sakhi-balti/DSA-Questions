#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> &arr, int idx, vector<vector<int>> &res) 
{
    if (idx == arr.size())
    {
        res.push_back(arr); 
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[idx], arr[i]);
        permute(arr, idx + 1, res);
        swap(arr[idx], arr[i]); // backtrack_step
    }
}

vector<vector<int>> getPermutation(vector<int> &arr) 
{
    vector<vector<int>> res;
    permute(arr, 0, res);
    return res;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> subValues = getPermutation(arr); 

    // Printing the permutations
    for (const auto &permutation : subValues)
    {
        for (int num : permutation)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
