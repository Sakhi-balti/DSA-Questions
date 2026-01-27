#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isPalindrom(string s)
{
    string s2 = s;
    reverse(s.begin(), s.end());
    return s == s2 ? true : false;
}
void getAllpartition(string s, vector<vector<string>> &ans, vector<string> &partition)
{
    if (s.length() == 0)
    {
        ans.push_back({partition});
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        string part = s.substr(0, i + 1);
        if (isPalindrom(part))
        {
            partition.push_back(part);
            getAllpartition(s.substr(i + 1), ans, partition);

            partition.pop_back();
        }
    }
}
vector<vector<string>> palindromPartition(string s)
{
    vector<vector<string>> ans;
    vector<string> partition;
    getAllpartition(s, ans, partition);
    return ans;
}
int main()
{
    string s = "aab";
    vector<vector<string>> result = palindromPartition(s);
    for (auto val : result)
    {
        for (auto ele : val)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}