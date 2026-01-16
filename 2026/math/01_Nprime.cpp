#include <iostream>
#include <vector>
using namespace std;

int n_Primes(int n)
{
    if (n < 2)
    {
        return 0;
    }

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    // Sieve of Eratosthenes algorithm
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {

            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = n_Primes(n);
    cout << "Number of primes up to " << n << ": " << result << endl;

    return 0;
}