#include <iostream>
#include <vector>
using namespace std;
bool isSafe(vector<vector<char>> &board, int row, int col, int dig)
{
    // HoriZontally
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == dig)
            return false;
    }
    // vertically
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == dig)
            return false;
    }
    // withing grid
    int startRow = row - row % 3, startCol = col - col %
                                                       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i + startRow][j + startCol] == dig)
                return false;
        }
    }
    return true;
}
bool helperFunc(vector<vector<char>> &board, int row, int col)
{
    if (row == 9)
    {
        return true;
    }
    int nexrow = row, nexcol = col + 1;
    if (nexcol == 9)
    {
        nexcol = 0;
        nexrow = row + 1;
    }

    if (board[row][col] != '-')
    {
        return helperFunc(board, nexrow, nexcol);
    }
    for (char dig = 1; dig <= 9; dig++)
    {
        if (isSafe(board, row, col, dig))
        {
            board[row][col] == dig;
            helperFunc(board, nexrow, nexcol)
            {
                return true;
            }
            board[row][col] == '-';
        }
    }
    return false;
}
void sudokuSolver(vector<vector<char>> &board)
{
    helperFunc(board, 0, 0);
}
int main()
{
    //  In these section we will create a vector of vector
    //  of char that some value are fill and some are not fill.
    return 0;
}