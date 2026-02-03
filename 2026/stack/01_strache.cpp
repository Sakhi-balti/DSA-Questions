#include <iostream>
#include <vector>
using namespace std;
// implement stack from strach
class Stack
{

    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {

        return v.back();
    }
    bool empty()
    {
        return v.size() == 0;
    }
};

int main()
{
    Stack s;
    s.push(90);
    s.push(12);
    s.push(33);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}