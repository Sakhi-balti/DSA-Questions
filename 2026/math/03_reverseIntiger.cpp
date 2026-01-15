#include <iostream>
#include <vector>
using namespace std;
int reverseIntiger(int n)
{
    int re_nume = 1;
    while (n != 0)
    {
        int digit = n % 10;
        re_nume *= 10 + digit;
        n = n / 10;
    }
    return re_nume;
}
int main()
{
    int num = 7834;
    int re_nume = reverseIntiger(num);
    cout << re_nume;
    return 0;
}