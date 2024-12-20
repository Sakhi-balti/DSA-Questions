#include <iostream>
#include <vector>
using namespace std;
// int GCD(int n, int m)
// {
//     if (m == 0)
//         return n;
//     if (n == 0)
//         return m;
//     if (n == m)
//         return m;
//     int gcd = 1;
//     for (int i = 1; i <= min(n, m); i++)
//     {
//         if (n % i == 0 && m % i == 0)
//         {
//             gcd = i;
//         }
//     }
//     return gcd;
// }

// using the euliden algorithem to solve the GCD problem
// int GCD(int n, int m)
// {
//     while (n > 0 && m > 0)
//         if (n > m)
//         {
//             n = n % m;
//         }
//         else
//         {
//             m = m % n;
//         }
//     if (n == 0)
//         return m;
//     return n;
// }
// using the recorssion method
int gcdreg(int n, int m)
{
    if (m == 0)
        return n;
    else
        return gcdreg(m, n % m);
}
int lcm(int n, int m)
{
    int gcd = gcdreg(n, m);
    return (n * m) / gcd;
}
int main()
{
    int n = 10, m = 50;
    cout << "gcd :" << gcdreg(n, m) << endl;
    cout << "LCM :" << lcm(n, m);
    return 0;
}
