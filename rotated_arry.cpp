#include <iostream>
#include <vector>
using namespace std;
int rotated_arry(vector<int> vec, int target)
{
    int st = 0;
    int n = vec.size() - 1;
    int end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (vec[mid] == target)
        {
            return mid;
        }
        if (vec[st] <= vec[mid])
        {
            if (vec[st] <= target <= vec[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (vec[mid] <= target <= vec[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {70, 80, 90, 30, 40, 50, 60};
    int target = 60;
    cout << rotated_arry(vec, target);
    return 0;
}