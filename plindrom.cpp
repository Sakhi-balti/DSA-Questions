#include <iostream>
#include <vector>
using namespace std;
bool isAlphaNume(char chr)
{
    if ((chr >= '0' && chr <= '9') || (tolower(chr) >= 'a' && tolower(chr) <= 'y'))
    {
        return true;
    }
    return false;
}
bool plindrome_(string &s)
{
    int end = s.length() - 1;
    int st = 0;
    while (st < end)
    {
        if (!isAlphaNume(s[st]))
        {
            st++;
            continue;
        }

        if (!isAlphaNume(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main()
{
    string s = "Ac3e3ca";
    cout << plindrome_(s);

    return 0;
}