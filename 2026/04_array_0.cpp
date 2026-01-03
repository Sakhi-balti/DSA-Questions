#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // find the smallest/largest values
    int size = 7;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    int arr[size] = {33, 44, 22, 55, 32, 24, 35};
    for (int i = 0; i < size; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    cout << "min :" << minVal << endl;
    cout << "max :" << maxVal << endl;
    return 0;
}