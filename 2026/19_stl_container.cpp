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
    vector<int> vec = {12, 12, 12, 12, 12};
    // vector<int>::iterator it;
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << endl;
    }

    return 0;
}