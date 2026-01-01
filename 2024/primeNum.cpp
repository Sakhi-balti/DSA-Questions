#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int i)
{
    for (int j = 2; j <= sqrt(i); j++)
    {
        if (i % j == 0)
        {
            return false;
        }
    }
    return true;
}
void findPrimeNumber(int low, int high)
{
    for (int i = low; i <= high; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int low, high;
    cout << "Enter the lower bound :";
    cin >> low;
    cout << "Enter the higher bound :";
    cin >> high;
    findPrimeNumber(low, high);

    return 0;
}
