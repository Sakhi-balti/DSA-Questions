#include <iostream>
#include <vector>
using namespace std;
bool binarysearch_matrix(vector<vector<int>> mat, int target)
{
    int m = mat.size(); // row
    int n = mat[0].size();
    int r = 0, col = n - 1;
    while (col >= 0 && r < m)
    {
        if (target == mat[r][col])
        {
            return true;
        }
        else if (target < mat[r][col])
        {
            col--;
        }
        else
        {
            r++;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> mat = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30},
    };
    int target = 14;
    cout << binarysearch_matrix(mat, target);
    return 0;
}