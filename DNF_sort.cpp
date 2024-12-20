#include <iostream>
#include <vector>
using namespace std;
void dutch_sort(vector<int> &arr)
{
    int n = arr.size();
    int count_1 = 0, count_2 = 0, count_3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count_1++;
        else if (arr[i] == 1)
            count_2++;
        else
            count_3++;
    }
    int index = 0;
    for (int i = 0; i < count_1; i++)
        arr[index++] = 0;
    for (int i = 0; i < count_2; i++)
        arr[index++] = 1;
    for (int i = 0; i < count_3; i++)
        arr[index++] = 2;
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
    printSorted(arr);
}