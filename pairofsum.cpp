#include <iostream>
#include <vector>
using namespace std;
vector<int> pair_sum(vector<int> num, int target)
{
    vector<int> ans;
    int n = num.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (num[i] + num[j] < target)
        {
            i++;
        }
        else if (num[i] + num[j] > target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{
    // Brute  Force Approach are using to resolve this promblem
    // we have target value and vector are given,choose those value that sum is equal to target value
    vector<int> num = {2, 4, 6, 8, 12, 17, 34, 39};
    int target = 20;
    vector<int> ans = pair_sum(num, target);
    cout << ans[0] << " and " << ans[1];
}