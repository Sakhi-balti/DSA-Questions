#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int arr[] = {0, 1, 2, 1, 0, 2, 0};
    int con_zero = 0, con_one = 0, con_two = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == 0)
        {
            con_zero++;
        }
        else if (arr[i] == 1)
        {
            con_one++;
        }
        else
        {
            con_two++;
        }
    }
    int index = 0;
    for (int i = 0; i < con_zero; i++)
    {
        arr[index++] = 0;
    }
    for (int i = 0; i < con_one; i++)
    {
        arr[index++] = 1;
    }
    for (int i = 0; i < con_two; i++)
    {
        arr[index++] = 2;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}