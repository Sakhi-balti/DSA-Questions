#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    m.emplace("sakhi", 12000);
    m.emplace("abc", 13000);
    m.emplace("def", 14000); // insert a pair
    m.emplace("pkr", 15000);
    m.emplace("sakhi", 16788);

    for (auto ele : m)
    {
        cout << ele.first << " " << ele.second << endl;
    }
}