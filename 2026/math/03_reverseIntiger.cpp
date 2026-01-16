#include <iostream>
#include <vector>
using namespace std;
int reverseIntiger(int n)
{
    int re_nume = 0;
    int sign = n < 0 ? -1 : 1;
    n = abs(n);
    while (n != 0)
    {
        int digit = n % 10;

        re_nume = re_nume * 10 + digit;
        n = n / 10;
    }
    return re_nume * sign;
}
int main()
{
    int num = -7834;
    int re_nume = reverseIntiger(num);
    cout << re_nume;
    return 0;
}