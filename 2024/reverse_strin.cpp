#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string Reverse_(string &s)
{
    int n = s.length();
    reverse(s.begin(), s.end());
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        string words = "";
        while (i < n && s[i] != ' ')
        {
            words += s[i];
            i++;
        }
        reverse(words.begin(), words.end());
        if (words.length() > 0)
        {
            ans += words + " ";
        }
    }
    return ans;
}
int main()
{
    string s = "The sky is blue";
    cout << Reverse_(s);
    return 0;
}