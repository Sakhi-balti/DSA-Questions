#include <iostream>
#include <vector>
using namespace std;

int decToBinary(int decimal)
{

    int ans = 0, pow = 1;
    while (decimal > 0)
    {
        int rem = decimal % 2;
        decimal /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
// 110011
int binToDecimal(int binNum)
{
    int ans = 0;
    int pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    int decNum = 20;
    int binary = 110011;
    cout << "Binary: " << decToBinary(decNum) << endl;
    cout << "Decimal:" << binToDecimal(binary);
    return 0;
}