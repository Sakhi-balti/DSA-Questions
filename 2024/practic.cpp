#include <iostream>
#include <vector>
using namespace std;
void insertion_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
int main()
{
    vector<int> arr = {12, 23, 54, 23, 45, 43, 52, 67};
    insertion_sort(arr);
    return 0;
}