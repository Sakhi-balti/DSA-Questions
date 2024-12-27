#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPlindrom(string &s)
{
    string s1 = s;
    reverse(s1.begin(), s1.end());
    return s1 == s;
}
void solve(vector<string> &combin, string s, vector<vector<string>> &ans)
{
    if (s.size() == 0)
    {
        ans.push_back(combin);
        return;
    }
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        string part = s.substr(0, i + 1);
        if (isPlindrom(part))
        {
            combin.push_back(part);
            solve(combin, s.substr(i + 1), ans);
            combin.pop_back();
        }
    }
}
vector<vector<string>> Partition(string s)
{
    vector<vector<string>> ans;
    vector<string> combin;

    solve(combin, s, ans);
    return ans;
}
int main()
{
    string s = "aab";
    vector<vector<string>> plindrom = Partition(s);
    for (auto ele : plindrom)
    {
        cout << "[";
        for (auto ele1 : ele)
        {
            cout << ele1 << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}