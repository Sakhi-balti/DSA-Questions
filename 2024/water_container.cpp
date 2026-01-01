#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size = 8;
    int array[size] = {9, 5, 7, 12, 8, 6, 4, 2};
    int max_storage = 0;

    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            int height = min(array[i], array[j]);
            int width = j - i;
            int current_storage = height * width;
            max_storage = max(max_storage, current_storage);
        }
    }

    cout << "Maximum water storage: " << max_storage << endl;

    return 0;
}