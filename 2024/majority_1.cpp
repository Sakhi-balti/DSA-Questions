#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> num = {4, 4, 4, 5, 5, 5, 9, 9, 9, 5};
    int n = num.size();
    int majority = n / 2;
    for (int value : num)
    {
        int frequency = 0;
        for (int ele : num)
        {
            if (value == ele)
            {
                frequency++;
            }
        }
        if (frequency > majority)
        {
            cout << value;
        }
    }
}