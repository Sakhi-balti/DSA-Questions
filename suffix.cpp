#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    int num[n] = {1, 2, 3, 4, 5};
    int prefix[n];
    int suffix[n];
    int ans[n];
    // firtly we calculate the prefix;
    prefix[0] = 1;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * num[i - 1];
    }

    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * num[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}