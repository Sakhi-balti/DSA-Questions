#include <iostream>
#include <vector>
using namespace std;
bool isArmstrong(int n)
{
    int copy = n;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += (digit * digit * digit);
        n /= 10;
    }
    if (copy == sum)
    {
        return true;
    }
    return false;
}
int main()
{
    int n = 1923;
    if (isArmstrong(n))
    {
        cout << "its Armstrong ";
    }
    else
        cout << "its not Armstrong";
    return 0;
}