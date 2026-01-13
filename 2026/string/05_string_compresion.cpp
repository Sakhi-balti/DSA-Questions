#include <iostream>
#include <vector>
using namespace std;
vector<char> compresion(vector<char> &chr)
{
    int n = chr.size();
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = chr[i];
        int count = 0;
        while (i < n; &&chr[i] == ch)
        {
            count++;
            i++;
        }
        if (count == 1)
        {
            chr[idx++] = ch;
        }
        else
        {
            chr[idx++] = ch;
            string s = to_string(count);
            for (int val : s)
            {
                chr[idx++] = val;
            }
        }
        i--;
    }
    char.resize();
    return idx;
}
int main()
{

    vector<char> chr = {'a', 'b', 'b', 'c', 'c', 'c'};
    vector<char> result = compresion(chr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << i << " ";
    }

    return 0;
}