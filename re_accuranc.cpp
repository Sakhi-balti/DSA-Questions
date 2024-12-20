#include <iostream>
#include <vector>
using namespace std;
string remove_accurance(string &s, string &part)
{
    while (s.length() > 0 && s.find(part) <= s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << remove_accurance(s, part) << endl;

    return 0;
}