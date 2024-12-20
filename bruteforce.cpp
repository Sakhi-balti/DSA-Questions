#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Brute force Approch
    int n = 7;
    int arr[n] = {12, -13, 27, 37, -16, -9};
    int max_sum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int curr_sum = 0;
        for (int end = st; end < n; end++)
        {
            curr_sum += arr[end];
            max_sum = max(curr_sum, max_sum);
        }
    }
    cout << "max sum of sub_array :" << max_sum;
}