#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <math.h>
using namespace std;
int prefixEvaluation(string &s)
{
    int ans = 0;
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string s = "-+7*45+20";
    cout << prefixEvaluation(s);
}
