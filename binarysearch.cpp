#include <iostream>
#include <vector>
using namespace std;
int Binary_search(vector<int> num, int target)
{
    int st = 0;
    int end = num.size() - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (target > num[mid])
        {
            st = mid + 1;
        }
        else if (target < num[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> num = {2, 3, 5, 6, 7, 8, 9};
    int target = 9;
    cout << Binary_search(num, target);
}