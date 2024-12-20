#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array[] = {12, 13, 15, 17, 19, 10};
    int *ptr = array;
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
}