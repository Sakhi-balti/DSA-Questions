#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isFreqSame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}
bool checkPermutaion(string s1, string s2)
{

    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }
    int winSize = s1.length();
    for (int i = 0; i < s2.length(); i++)
    {
        int winIdx = 0, idx = i;

        int windFreq[26] = {0};
        while (winIdx < winSize && idx < s2.length())
        {
            windFreq[s2[idx] - 'a']++;
            winIdx++, idx++;
        }
        if (isFreqSame(freq, windFreq))
        {
            return true;
        }
    }
    return false;
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