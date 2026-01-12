#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkPermutaion(string s1, string s2)
{

    int freq[26] = {0};
}
int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool result = checkPermutaion(s1, s2);
    if (result)
    {
        cout << "permutation exist" << endl;
    }
    else
    {
        cout << "permutation not found " << endl;
    }

    return 0;
}