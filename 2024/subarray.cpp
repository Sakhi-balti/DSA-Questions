// Sub array or maximun sum of sub array
// Kandan Algorithem
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 6;
    int arr[n] = {21, 42, 53, 24, 59, 60};
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int k = st; k <= end; k++)
            {
                cout << arr[k] << ",";
            }
            cout << " ";
        }
        cout << endl;
    }
}