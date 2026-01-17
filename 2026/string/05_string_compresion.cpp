#include <iostream>
#include <vector>
using namespace std;
void compression(vector<char> &chr)
{
    int idx = 0;
    for (int i = 0; i < chr.size();)
    {
        char ch = chr[i];
        int count = 0;
        while (i < chr.size() && chr[i] == ch)
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
            for (char digit : s)
            {
                chr[idx++] = digit;
            }
        }
    }
    chr.resize(idx);
}
int main()
{

    vector<char> chr = {'a', 'b', 'b', 'c', 'c', 'c'};
    compression(chr);
    for (char c : chr)
    {
        cout << c << ' ';
    }
    return 0;
}