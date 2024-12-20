#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int postEvaluation(string &s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] < '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int b = st.top();
            st.pop();
            int a = st.top();
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
            }
        }
    }
    return st.top();
}
int main()
{
    string s = "46+2/5*7+";
    cout << postEvaluation(s);
    return 0;
}