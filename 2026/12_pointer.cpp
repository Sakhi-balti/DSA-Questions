
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a = 20;
    int *ptr = &a;
    int **_ptr = &ptr;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << &*_ptr << endl;
    return 0;
}