#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int maxrowSum(int mat[][4], int rows, int cols)
{
    int maxcol = INT_MIN;
    int indx = 0;
    while (indx < cols)
    {
        int curr_sum = 0;
        for (int i = 0; i < rows; i++)
        {
            curr_sum += mat[i][indx];
        }
        maxcol = max(maxcol, curr_sum);
        indx++;
    }
    return maxcol;
}
int main()
{
    int matrix[3][4] = {{1, 2, 3, 0}, {0, 3, 4, 1}, {0, 2, 3, 4}};
    int row = 3;
    int col = 4;
    cout << "Highest row sum: " << maxrowSum(matrix, row, col);
    return 0;
}