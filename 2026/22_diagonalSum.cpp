#include <iostream>
#include <vector>

using namespace std;
pair<int, int> linearSearch(int mat[][3], int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == target)
            {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}
int main()
{
    int matric[3][3] = {{1, 3, 4}, {2, 0, 1}, {4, 1, 2}};
    int target = 4;
    pair<int, int> result = linearSearch(matric, target);
    if (result.first == -1)
    {
        cout << "not found the result:" << endl;
    }
    else
    {
        cout << "Firt element: " << result.first << endl;
        cout << "Second element: " << result.second << endl;
    }

    return 0;
}