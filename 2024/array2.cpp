#include <iostream>
#include <vector>
using namespace std;
bool searchInRow(vector<vector<int>> &mat, int target, int row)
{
    int n = mat[0].size(); // only columns is need not the rows
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target == mat[row][mid])
        {
            return true;
        }
        else if (target < mat[row][mid])
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return false;
}
bool search_target(vector<vector<int>> &mat, int target)
{
    int m = mat.size();
    int n = mat[0].size();
    int sRow = 0, eRow = n - 1;
    while (sRow <= eRow)
    {
        int midRow = sRow + (eRow - sRow) / 2;
        if (target >= mat[midRow][0] && target <= mat[midRow][n - 1])
        {
            return searchInRow(mat, target, midRow);
        }
        else if (target > mat[midRow][n - 1])
        {
            sRow = midRow + 1;
        }
        else if (target < mat[midRow][0])
        {
            eRow = midRow - 1;
        }
    }
    return false;
}
int main()
{
    // Example 2D array
    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target = 34;
    cout << search_target(mat, target);
    return 0;
}
