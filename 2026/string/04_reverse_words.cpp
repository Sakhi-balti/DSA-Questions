#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string reSentance(string &s)
{
    string ans = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while ((i < s.length()) && (s[i] != ' '))
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            if (ans.length() > 0)
            {
                ans += " " + word;
            }
            else
            {
                ans += word;
            }
        }
    }
    return ans;
}

int main()
{
    string s = "hellow world";
    string re = reSentance(s);
    cout << re << endl;

    return 0;
}