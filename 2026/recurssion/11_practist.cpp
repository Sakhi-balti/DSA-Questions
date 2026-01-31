#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> printSubset(vector<int> &arr, int idx)
{
    vector<vector<int>> ans;
    vector<int> subset;
    if (idx == arr.size())
    {

        return;
    }
    subset.push_back(arr[idx]);
    printSubset(arr, idx + 1);
}
int main()
{
    vector<int> arr = {1, 2, 3};
    int idx = 0;
    vector<vector<int>> result = printSubset(arr, idx);
    for (auto ele : result)
    {
        for (auto val : ele)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}