
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size = 10;
    int arr[size] = {2, 3, 3, 2, 3, 5, 6, 7, 5, 6};
    int uniqVal = 0;
    for (int i = 0; i < size; i++)
    {
        int counter = 0;
        for (int j = 0; j < size; j++)
        {

            if (arr[i] == arr[j])
            {
                counter++;
            }
        }
        if (counter == 1)
        {
            uniqVal = arr[i];
        }
    }

    cout << "uniq value :" << uniqVal;

    return 0;
}