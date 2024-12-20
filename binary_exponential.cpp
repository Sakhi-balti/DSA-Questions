#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    int n = 3;
    int r = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            r *= x;
        }
        x *= x;
        n /= 2;
    }
    cout << "the result is this :" << r;
}