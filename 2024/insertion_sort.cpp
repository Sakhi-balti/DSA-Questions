#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && curr < arr[prev])
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    int n = 5;
    int arr[n] = {50, 40, 21, 56, 53};
    insertionSort(arr, n);
}
