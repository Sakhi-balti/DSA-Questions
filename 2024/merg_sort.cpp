#include <iostream>
#include <vector>
using namespace std;
void mergSort(vector<int> A, vector<int> B)
{
    int m = 3;
    int n = 3;
    int i = m - 1, j = n - 1, idx = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] > B[j])
        {
            A[idx] = A[i];
            idx--, i--;
        }
        else
            A[idx--] = B[j--];
    }
}
void print_(const vector<int> &A)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
    cout << endl;
}
int main()
{
    vector<int> A = {1, 2, 3, 0, 0, 0};
    vector<int> B = {2, 4, 5};
    mergSort(A, B);
    print_(A);
}