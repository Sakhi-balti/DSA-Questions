#include <iostream>
#include <vector>
using namespace std;
int reverseInteger(int n)
{
    int reverse_num = 0;
    int sign = n < 0 ? -1 : 1;
    n = abs(n);
    while (n != 0)
    {
        int lastDigit = n % 10; // let 4738 so 4730 total divide by 10 but 8 remain
        reverse_num = reverse_num * 10 + lastDigit;
        n = n / 10; // Remove the last digit
    }
    return reverse_num * sign;
}
int main()
{

    int n = -94537;
    cout << reverseInteger(n);
    return 0;
}
