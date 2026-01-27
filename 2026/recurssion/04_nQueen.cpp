#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n)
{
    // Horizontal
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
        {
            return false;
        }
    }

    // Vertical
    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }

    // Left diagonal (upper-left)
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    // Right diagonal (upper-right)
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

void helper(vector<vector<string>> &ans, vector<string> &board, int row, int n)
{
    // Base case: all queens placed
    if (row == n)
    {
        ans.push_back(board);
        return;
    }

    // Try placing queen in each column of current row
    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';          // Place queen
            helper(ans, board, row + 1, n); // Recurse to next row
            board[row][col] = '.';          // Backtrack
        }
    }
}

vector<vector<string>> nQueen(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));
    helper(ans, board, 0, n);
    return ans;
}

int main()
{
    int n = 4;
    vector<vector<string>> ans = nQueen(n);

    cout << "Total solutions: " << ans.size() << endl
         << endl;

    for (int idx = 0; idx < ans.size(); idx++)
    {
        cout << "Solution " << idx + 1 << ":" << endl;
        for (auto row : ans[idx])
        {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}