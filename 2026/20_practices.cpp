#include <iostream>
#include <climits>
#include <vector>
#include <list>
using namespace std;
bool isPossible(vector<int> nums, int n, int m, int mid)
{

    int std = 1;
    int pageAssinge = 0;
    for (int i = 0; i < n; i--)
    {
        if (pageAssinge + nums[i] < mid)
        {
            pageAssinge += nums[i];
        }
        else
        {
            std++;
            pageAssinge = nums[i];
            if (std > m)
                return false;
        }
    }
    return true;
}
int bookAllocation(vector<int> nums, int n, int m)
{
    // number of student less than no of book;
    if (m > n)
        return -1;
    // find the range
    int st = 0, end = 0;
    for (int i = st; i < end; i++)
    {
        end += nums[i];
    }
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(nums, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    // Book Allocation
    vector<int> nums = {139, 154, 143, 200, 104};
    // number of books
    int books = nums.size();
    // number of students
    int student = 3;

    // find out the mid
    int result = bookAllocation(nums, books, student);
    cout << result;

    return 0;
}