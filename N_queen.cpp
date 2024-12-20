#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n)
{
    // check for rows
    for (int i = 0; i < n; i++)
    {
        if (board[row][i] == 'Q')
        {
            return false;
        }
    }

    // check for columns
    for (int j = 0; j < n; j++)
    {
        if (board[j][col] == 'Q')
        {
            return false;
        }
    }

    // check for leftside diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    // check for right side diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &res)
{
    if (row == n)
    {
        res.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';
            nQueens(board, row + 1, n, res);
            board[row][col] = '-';
        }
    }
}

vector<vector<string>> solveQueens(int n)
{
    vector<string> board(n, string(n, '-'));
    vector<vector<string>> res;
    nQueens(board, 0, n, res);
    return res;
}

int main()
{
    int n = 4;
    vector<vector<string>> solutions = solveQueens(n);

    for (const auto &solution : solutions)
    {
        for (const auto &row : solution)
        {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
