#include <iostream>
using namespace std;
int main()
{
    // two pointer Approch
    int size = 9;
    int array[size] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max_water = 0;
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int width = right - left;
        int height = min(array[left], array[right]);
        int Area = width * height;
        max_water = max(max_water, Area);
        array[left] < array[right] ? left++ : right--;
    }
    cout << max_water;
    cout << "size of array " << sizeof(array);
}