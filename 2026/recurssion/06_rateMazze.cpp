#include <iostream>
#include <vector>
using namespace std;
void helper(vector<vector<int>> &mat, int row, int col, string path, vector<string> &ans, vector<vector<bool>> &vist)
{
    int n = mat[0].size();
    if (row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || vist[row][col] == true)
    {
        return;
    }
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }
    vist[row][col] = true;
    // down
    helper(mat, row + 1, col, path + "D", ans, vist);
    // right
    helper(mat, row, col + 1, path + "R", ans, vist);
    // left
    helper(mat, row, col - 1, path + "L", ans, vist);
    // upword
    helper(mat, row - 1, col, path + "U", ans, vist);

    // Backtrack
    vist[row][col] = false;
}
vector<string> getAnswer(vector<vector<int>> &mat)
{
    int n = mat.size();
    vector<string> ans;
    vector<vector<bool>> vist(n, vector<bool>(n, false));
    string path = "";
    helper(mat, 0, 0, path, ans, vist);
    return ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 0, 0, 0},
                               {1, 1, 0, 1},
                               {1, 1, 0, 0},
                               {0, 1, 1, 1}};
    vector<string> result = getAnswer(mat);

    for (auto val : result)
    {
        cout << val << " ";
    }
    return 0;
}