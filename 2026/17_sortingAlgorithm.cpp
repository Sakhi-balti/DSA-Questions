#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Bubble sort run (n-1)
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (!flag)
        {
            return;
        }
    }
}
void selectSort(int arr[], int n)
{
    // consider one part is sort and another part is unsort
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i; // unsorted part starting index
        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallestIndex] > arr[j])
            {
                smallestIndex = j;
            }
        }
        swap(arr[smallestIndex], arr[i]);
    }
}
// INSERTION SORT
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int previse = i - 1;
        int curIndex = i;        // unsorted part
        int key = arr[curIndex]; // Store the value to insert
        while (previse >= 0 && arr[previse] > key)
        {
            arr[previse + 1] = arr[previse];
            previse--;
        }

        arr[previse + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{

    int n = 5;
    int arr[n] = {7, 6, 8, 4, 3};
    // bubbleSort(arr, n);
    // selectSort(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}