#include <iostream>
#include <vector>
using namespace std;
// int getMax_rowsum(int matrix[][3], int row, int col, int key)
// {
//     int maxsum = INT_MIN;
//     for (int i = 0; i < row; i++)
//     {
//         int indiv_row = 0;
//         for (int j = 0; j < col; j++)
//         {
//             indiv_row += matrix[i][j];
//         }
//         maxsum = max(maxsum, indiv_row);
//     }
//     return maxsum;
// }
int getMax_col(int matrix[][3], int row, int col)
{
    int maxsum = INT_MIN;
    for (int i = 0; i < col; i++)
    {
        int indiv_col = 0;
        for (int j = 0; j < row; j++)
        {
            indiv_col += matrix[i][j];
        }
        maxsum = max(maxsum, indiv_col);
    }
    return maxsum;
}
int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 10}};
    int row = 3;
    int col = 3;
    // cout << getMax_rowsum(matrix, row, col, 5);
    cout << getMax_col(matrix, row, col);

    return 0;
}