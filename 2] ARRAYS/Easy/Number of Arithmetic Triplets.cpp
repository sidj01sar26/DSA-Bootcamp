// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arithmeticTriplets(vector<int> &nums, int diff)
    {
        unordered_map<int, bool> mp; 
        // Create a hash map to store the numbers in the array
        for (int num : nums)
        {
            mp[num] = true; 
            // Mark each number as present in the hash map
        }

        int cnt = 0; // Initialize a counter for the arithmetic triplets
        for (int num : nums)
        {
            // Check if both (num - diff) and (num + diff) exist in the hash map
            if (mp.count(num - diff) && mp.count(num + diff))
            {
                cnt++; // If they exist, increment the counter
            }
        }

        return cnt; // Return the total count of arithmetic triplets
    }
};