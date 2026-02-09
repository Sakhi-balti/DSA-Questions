#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool know(vector<vector<int>> mat, int a, int b)
{
    return mat[a][b] == 1;
}
int findCelebrity(vector<vector<int>> mat)
{
    stack<int> s;
    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }
    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if (know(mat, a, b))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }
    int celeb = s.top();

    for (int i = 0; i < n; i++)
    {
        if (i != celeb)
        {
            if (know(mat, celeb, i) || !know(mat, i, celeb))
            {
                return -1;
            }
        }
    }
    return celeb;
}
int main()
{
    vector<vector<int>> mat = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    cout << findCelebrity(mat) << endl;
    return 0;
}