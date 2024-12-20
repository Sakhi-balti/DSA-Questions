#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void permute(string str)
{
    // Sort the string in lexicographical order
    sort(str.begin(), str.end());

    // Print all permutations
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

int main()
{
    string str = "abc";
    permute(str);
    return 0;
}
