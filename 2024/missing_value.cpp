#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findMissingAndRepeating(vector<vector<int>> &vec)
{
    vector<int> ans;
    unordered_set<int> seen;
    int n = vec.size();
    int expectedSum = (n * n) * (n * n + 1) / 2; // Sum of first n^2 natural numbers
    int actualSum = 0;
    int repeating = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int num = vec[i][j];
            actualSum += num;

            // Check for repeating number
            if (seen.find(num) != seen.end())
            {
                repeating = num;
            }
            seen.insert(num);
        }
    }

    int missing = expectedSum - (actualSum - repeating);
    ans.push_back(repeating);
    ans.push_back(missing);
    return ans;
}

int main()
{
    vector<vector<int>> vec = {{9, 3, 1}, {8, 9, 2}, {4, 5, 6}}; // Example input
    vector<int> arr = findMissingAndRepeating(vec);
    cout << "Repeating: " << arr[0] << ", Missing: " << arr[1] << endl;
    return 0;
}