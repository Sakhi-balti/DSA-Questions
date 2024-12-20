#include <iostream>
using namespace std;
int main()
{

    int arr[] = {12, 14, 16, 17, 18, 19};
    int target = 16;
    for (int i = 0; i <= 6; i++)
    {
        if (target == arr[i])
            cout << i;
    }
}
