#include <iostream>
#include <vector>
using namespace std;
int calculation(int a, int b)
{
    // Using Euclid's Algorithm
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    if (a == 0)
        return b;
    return a;
}
int main()
{
    // Calculate the HCF
    int n1 = 6;
    int n2 = 12;
    int hcf = calculation(n1, n2);
    cout << "HCF or GCD: " << hcf << endl;
    return 0;
}