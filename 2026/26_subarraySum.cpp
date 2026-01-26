#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Brute Force Approch
int subArrSum(vector<int> &nums, int tar)
{

    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == tar)
            {
                count++;
            }
        }
    }
    return count;
}
// Using Hashing
int subArrSumCount(vector<int> &nums, int tar)
{

    unordered_map<int, int> m;
    int n = nums.size();
    int count = 0;
    int prefixSum = 0;
    m[0] = 1;
    for (int i = 0; i < n; i++)
    {
        prefixSum += nums[i];

        int val = prefixSum - tar;
        if (m.find(val) != m.end())
        {
            count += m[val];
        }
        m[prefixSum]++;
    }

    return count;
}

// ,,,,,,,,,,,,,,,,,,,
int subarraySum(vector<int> &arr, int k)
{
    int n = arr.size(); // take the size of the array

    int prefix[n]; // make a prefix array to store prefix sum

    prefix[0] = arr[0]; // for element at index at zero, it is same

    // making our prefix array
    for (int i = 1; i < n; i++)
    {
        prefix[i] = arr[i] + prefix[i - 1];
    }

    unordered_map<int, int> mp; // declare an unordered map

    int ans = 0; // to store the number of our subarrays having sum as 'k'

    for (int i = 0; i < n; i++) // traverse from the prefix array
    {
        if (prefix[i] == k) // if it already becomes equal to k, then increment ans
            ans++;

        // now, as we discussed find whether (prefix[i] - k) present in map or not
        if (mp.find(prefix[i] - k) != mp.end())
        {
            ans += mp[prefix[i] - k]; // if yes, then add it our answer
        }

        mp[prefix[i]]++; // put prefix sum into our map
    }

    return ans; // and at last, return our answer
}

int main()
{

    vector<int> nums = {9, 4, 20, 3, 10, 5};
    int tar = 33;
    cout << subArrSum(nums, tar) << endl;
    cout << subArrSumCount(nums, tar) << endl;
    return 0;
}