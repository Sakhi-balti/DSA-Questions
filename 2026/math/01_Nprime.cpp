#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Seive of Eratosthenes
    int n = 50;
    vector<bool> isPrime(n + 1, true);
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;
            for (int j = i * 2; j < n; j + i)
            {

                isPrime[j] = false;
            }
        }
    }
    cout << count << endl;
    return 0;
}