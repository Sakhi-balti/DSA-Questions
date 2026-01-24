#include <iostream>
#include <vector>
using namespace std;
void printNum(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    printNum(n - 1);
    cout << n << " ";
}
int main()
{
    int n = 10;
    printNum(n);
    return 0;
}