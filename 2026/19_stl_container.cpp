#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;
int main()
{
    set<int> st = {1, 2, 3, 4, 5, 4};
    st.insert(12);
    for (int val : st)
    {
        cout << val << endl;
    }

    return 0;
}