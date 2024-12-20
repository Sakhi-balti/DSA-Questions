#include <iostream>
using namespace std;
int main()
{
    int size = 7;
    int maxprofit = 0;
    int price[size] = {10, 7, 5, 8, 11, 9};
    int purchas = price[0];
    for (int i = 1; i < size; i++)
    {
        if (price[i] > purchas)
        {
            maxprofit = max(maxprofit, price[i] - purchas);
        }
        purchas = min(purchas, price[i]);
    }
    cout << maxprofit;
}
