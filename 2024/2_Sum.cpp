#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> Two_sum(vector<int> &v, int target)
{
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < v.size(), i++)
    {
        int first = v[i];
        int second=target-first;
        if(m.find(second)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;
    }
    return ans;
}

int main()
{
    vector<int> vec = {3, 7, 6, 9, 5, 4};
    int target=16;
   ;
    return 0;
}
