#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // kandan algorithem solve max subarray sum
    int n = 6;
    int arr[] = {10, -12, 23, 44, -25};
    int max_sum = INT_MIN;
    // int current_sum = 0;
    for (int st = 0; st < n; st++)
    {
        int current_sum = 0;
        for (int end = st; end < n; end++)
        {
            current_sum += arr[end];
            max_sum = max(max_sum, current_sum);
            if (current_sum < 0)
            {
                current_sum = 0;
            }
        }
    }
    cout << "Maximum contiguous sum is " << max_sum << endl;
}