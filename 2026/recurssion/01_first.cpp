#include <iostream>
#include <vector>
using namespace std;
void printNum(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printNum(n - 1);
}
int numSum(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n + numSum(n - 1);
}
// check for array sort or  not
bool isSorted(vector<int> &arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    return arr[n - 1] > arr[n - 2] && isSorted(arr, n - 1);
}
int main()
{

    int n = 4;
    printNum(n);
    cout << endl;

    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "True or False: " << isSorted(nums, nums.size());

    cout << endl;
    cout << numSum(n);
    return 0;
}