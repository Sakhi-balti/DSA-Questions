#include <iostream>
#include <vector>
using namespace std;
int myfunction(vector<int> &num, int target)
{
    int st = 0;
    int en = num.size() - 1;
    while (st <= en)
    {
        int mid = (st + en) / 2;
        if (num[mid] == target)
        {
            return mid;
        }
        if (num[st] <= num[mid]) // search in left side
            if (num[st] <= target && target <= num[mid])
            {
                en = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        else                         // search in right side
            if (num[mid] <= num[en]) // search in right side
                if (num[mid] < target && target <= num[en])
                {
                    st = mid + 1;
                }
                else
                {
                    en = mid - 1;
                }
    }
    return -1;
}
int main()
{
    vector<int> arr = {9, 8, 7, 1, 2, 3, 4, 5, 6};
    int target = 5;
    cout << myfunction(arr, target);
}