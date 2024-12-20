#include <iostream>
#include <vector>
using namespace std;
vector<int> spiral_mat(vector<vector<int>> &mat)
{
    int m = mat.size();    // total number of row
    int n = mat[0].size(); // total number of column
    int st_row = 0, end_row = m - 1, st_col = 0, end_col = n - 1;
    vector<int> result;
    while (st_row <= end_row && st_col <= end_col)
    { // top
        for (int j = st_col; j <= end_col; j++)
        {
            result.push_back(mat[st_row][j]);
        }
        st_row++;
        // right side
        for (int i = st_row + 1; i <= end_row; i++)
        {
            result.push_back(mat[i][end_col]);
        }
        end_col--;
        // bottom side
        for (int j = n - 1; j >= st_col; j--)
        {
            if (st_row == end_row)
            {
                break;
            }
            result.push_back(mat[end_row][j]);
        }
        end_row--;
        // left side
        for (int i = m - 1; i >= st_row + 1; i--)
        {
            if (st_col == end_col)
            {
                break;
            }
            result.push_back(mat[i][st_col]);
        }
        st_col++;
    }
    return result;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};
    vector<int> resulte = spiral_mat(matrix);
    for (int value : resulte)
    {
        cout << value << " ";
    }
    return 0;
}