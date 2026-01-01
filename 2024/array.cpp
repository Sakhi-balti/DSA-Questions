#include <iostream>
using namespace std;
int main()
{
    int size = 6;
    int array[size] = {34, 8, 45, 67, 43, -47};
    int max_index = 0;
    int min_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < array[0])
        {
            min_index = i; // update min_index
        }
        if (array[i] > array[0])
        {
            max_index = i; // update max_index
        }
    }

    cout << "Max element is at index " << max_index << endl;
    cout << "Min element is at index " << min_index << endl;
}
