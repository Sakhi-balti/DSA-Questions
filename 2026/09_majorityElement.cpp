#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> nums = {1, 2, 2, 1, 1, 1};
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;
        for (int ele : nums)
        {
            if (val == ele)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            cout << val << " ";
        }
    }

    return 0;
}