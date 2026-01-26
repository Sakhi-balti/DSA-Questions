#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>> &board, int row, int col, char dig)
{
    // Horizentally
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == dig)
        {
            return false;
        }
    }
    // Vertically
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == dig)
        {
            return false;
        }
    }
    // Within Grid
    int startCol = (col / 3) * 3;
    int startRow = (row / 3) * 3;

    for (int i = startRow; i < startRow + 3; i++)
    {
        for (int j = startCol; j < startCol + 3; j++)
        {
            if (board[i][j] == dig)
            {
                return false;
            }
        }
    }
    return true;
}
bool helper(vector<vector<char>> &board, int row, int col)
{
    // Base case
    if (row == 9)
    {
        return true;
    }
    int nextCol = col + 1;
    int nextRow = row;
    if (nextCol == 9)
    {
        int nextRow = row + 1;
        int nextCol = 0;
    }
    if (board[row][col] != '.')
    {
        helper(board, nextRow, nextCol);
    }
    // degit place
    for (char dig = '1'; dig <= '9'; dig++)
    {
        if (isSafe(board, row, col, dig))
        {
            board[row][col] = dig;

            if (helper(board, nextRow, nextCol))
            {
                return true;
            }
            board[row][col] = '.';
        }
    }
    return false;
}
void solveSudoku(vector<vector<char>> &board)
{
    helper(board, 0, 0);
}
int main()
{
    // This is leetcode problem
    // place
    return 0;
}