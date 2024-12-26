#include <iostream>
#include <string>
#include <vector>
using namespace std;
void solve(vector<vector<int>> &num, int row, int col, vector<string> &ans, string path, vector<vector<bool>> &vesit)
{
    int n = num.size();
    if (row < 0 || col < 0 || row >= n || col >= n || num[row][col] == 0 || vesit[row][col] == true)
    {
        return;
    }
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }
    vesit[row][col] = true;
    solve(num, row + 1, col, ans, path + "d", vesit); // down
    solve(num, row - 1, col, ans, path + "u", vesit); // up
    solve(num, row, col - 1, ans, path + "l", vesit); // left
    solve(num, row, col + 1, ans, path + "r", vesit); // right  u
    vesit[row][col] = false;
}
vector<string> findPath(vector<vector<int>> &num)
{
    int n = num.size();
    vector<vector<bool>> vesit(n, vector<bool>(n, false));
    vector<string> ans;
    string path = "";
    solve(num, 0, 0, ans, path, vesit);
    return ans;
}
int main()
{
    vector<vector<int>> num = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans = findPath(num);

    for (string path : ans)
    {
        cout << path << endl;
    }
    return 0;
}