#include <iostream>
#include <vector>
using namespace std;

// Factorial calculated
int _factorial(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Calcuate the digit of sum

int digidSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{
    cout << "Factorial: " << _factorial(5) << endl;
    cout << "Sum of digit: " << digidSum(77) << endl;
    return 0;
}