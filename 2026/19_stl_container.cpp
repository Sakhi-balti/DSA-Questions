#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_map<string, int, greater<int>> m;
    m["name"] = 227799;
    m["age"] = 21;
    m["age"] = 21;
    m["Gender"] = 1;
    for (auto p : m)
    {
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}