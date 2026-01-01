#include <iostream>
using namespace std;
void select_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int small_index = i; // unsorted array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small_index])
            {
                small_index = j;
            }
        }
        swap(arr[small_index], arr[i]);
    }
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 5;
    int arr[n] = {50, 3, 49, 22, 1};
    select_sort(arr, n);
    cout << "Sorted array is: ";
    print_array(arr, n);
}