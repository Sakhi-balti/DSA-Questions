#include <iostream>
#include <vector>
using namespace std;
bool palindrom(string &str)
{

    bool flag = true;
    int n = str.size();
    int st = 0, end = n - 1;
    while (st < end)
    {
        if (str[st++] == str[end--])
        {
            flag = true;
        }
        else
        {

            return flag = false;
        }
    }

    return flag;
}
int main()
{
    string str = "raccar";
    cout << palindrom(str);

    return 0;
}