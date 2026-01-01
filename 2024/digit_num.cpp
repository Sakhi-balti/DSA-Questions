#include <iostream>
#include <vector>
using namespace std;
void printdigit(int n)
{

    while (n != 0)
    {

        int digit = n % 10;
        cout << " " << digit;
        n /= 10;
    }
}
int print_sum(int n)
{
    int sum = 0;
    while (n != 0)
    {

        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}
int print_count(int n)
{
    int count = 0;
    while (n != 0)
    {
        // int digit = n % 10;
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int number = 546738;
    // printdigit(number);
    // cout << print_sum(number);
    cout << print_count(number);

    return 0;
}
