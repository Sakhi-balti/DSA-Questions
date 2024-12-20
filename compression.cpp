#include <iostream>
#include <vector>
using namespace std;
int compression(vector<char> &chars)
{
    int n = chars.size();
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        char chr = chars[i];
        int count = 0;
        while (i < n && chr == chars[i])
        {
            count++;
            i++;
        }
        if (count == 1)
        {
            chars[index++] = chr;
        }
        else
        {
            chars[index++] = chr;
            string str = to_string(count);
            for (char digit : str)
            {
                chars[index++] = digit;
            }
        }
        i--;
    }
    chars.resize(index);
    return index;
}
int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << "siZe of array : " << compression(chars);
    // cout << "siZe :" << sizeof(chr);
    return 0;
}