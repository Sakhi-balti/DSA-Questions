#include <iostream>
// #include <math>
#include <vector>
using namespace std;
int main()
{
    // 121 leecode problem
    vector<int> price = {7, 4, 5, 3, 6, 9};
    // Get max profite
    int st = 0;
    int purchas = price[st];
    int maxProfit = 0;
    for (int val : price)
    {
        if (purchas < val)
        {
            maxProfit = max(maxProfit, val - purchas);
        }
        if (val < purchas)
        {
            purchas = val;
        }
    }
    cout << maxProfit;

    return 0;
}