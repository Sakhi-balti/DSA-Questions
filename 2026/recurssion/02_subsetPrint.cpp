#include <iostream>
#include <vector>
using namespace std;

void printSubset(vector<int> &arr, vector<int> &ans, int i)
{

    int n = arr.size();
    if (i == n)
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // inclusive
    ans.push_back(arr[i]);
    printSubset(arr, ans, i + 1);

    ans.pop_back(); // Backtrack
    // exclusive
    printSubset(arr, ans, i + 1);
}
int main()
{

    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    printSubset(arr, ans, 0);
    return 0;
}