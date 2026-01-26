#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<string>> ans = {{"Q", ".", "Q", "."},
                                  {".", "Q", ".", "."},
                                  {".", ".", ".", "Q"}};
    cout << ans[2][3];
    return 0;
}