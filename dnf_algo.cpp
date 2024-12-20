#include <iostream>
#include <vector>
using namespace std;
void dutch_sort(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (low <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
void printSorted(const vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 0};
    dutch_sort(arr);
    printSorted(arr); // Call to print the sorted array
    return 0;
}
