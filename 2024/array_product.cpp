#include <iostream>
#include <vector>
using namespace std;
vector<int> productofarrayexceptitself(vector<int> &num)
{
    int n = num.size();
    vector<int> ans(n, 1);
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * num[i - 1];
    }
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= num[i + 1];
        ans[i] *= suffix;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    // return ans;
}
int main()
{

    vector<int> num = {1, 2, 3, 4};

    productofarrayexceptitself(num);
}