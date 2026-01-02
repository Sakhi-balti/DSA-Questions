#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 6;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}
