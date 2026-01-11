#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string str = "HELLO WORLD";
    // reverse thie string
    int n = str.size();
    int st = 0, end = n - 1;
    while (st < end)
    {
        swap(str[st++], str[end--]);
    }
    cout << str;
    return 0;
}