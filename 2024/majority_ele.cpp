#include <iostream>
#include <vector>
using namespace std;
// vector<int>majority(vector<int>num){

// }

int main()
{
    vector<int> num = {12, 13, 14, 12};
    int n = num.size();
    int maj = n / 2;
    for (int val : num)
    {
        int freq = 0;
        for (int ele : num)
        {
            if (val == ele)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            cout << val;
        }
    }
}