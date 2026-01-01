#include <iostream>
#include <vector>
using namespace std;
int single_ele_array(vector<int> &A)
{
    int st = 1;
    int n = A.size();
    int ed = A.size() - 2;
    if (n == 1)
    {
        return A[0];
    }
    while (st <= ed)
    {
        int mid = st + (ed - st) / 2;
        if (mid == 0 && A[0] != A[1])
            return A[mid];
        if (mid == n - 1 && A[n - 1] != A[n - 2])
            return A[mid];
        if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1])
            return A[mid];
        if (mid % 2 == 0)             // even case
            if (A[mid - 1] == A[mid]) // left cas
                ed = mid - 1;
            else // right case
                st = mid + 1;
        else                          // odd case
            if (A[mid - 1] == A[mid]) // right case
                st = mid + 1;
            else // lleft case
                ed = mid - 1;
    }
    return 0;
}
int main()
{
    vector<int> vec = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7}; // array must be sorted
    cout << single_ele_array(vec);
    return 0;
}