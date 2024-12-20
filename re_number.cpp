#include <iostream>
#include <vector>
using namespace std;
int reversenumber(int n)
{
    int rev_num = 0;
    while (n != 0)
    {
        int rem = n % 10;
        rev_num = rev_num * 10 + rem;
        n = n / 10;
    }
    return rev_num;
}
int main()
{
    int number = 4537;
    cout << reversenumber(number);
    return 0;
}