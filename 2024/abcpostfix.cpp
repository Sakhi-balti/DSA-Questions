#include <iostream>
#include <string>
#include <stack>
using namespace std;
int precedence(char chr)
{
    if (chr == '+' || chr == '-')
    {
        return 1;
    }
    else if (chr == '*' || chr == '/')
    {
        return 2;
    }
    else
    {
        return -1;
    }
}
string post_fixx(string &s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res = res + st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && st.top() != '(' && precedence(st.top()) >= precedence(s[i]))
            {
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        while (!st.empty())
            res += st.top();
        st.pop();
    }
    return res;
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
    cout << post_fixx(s); // call the function

    return 0;
}