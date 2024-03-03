// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> result; // Initialize an empty vector to store the decompressed list

        // Iterate through the input list 'nums' by steps of 2 (since each pair represents frequency and value)
        for (int i = 0; i < nums.size(); i += 2)
        {
            // Insert 'nums[i]' occurrences of 'nums[i + 1]' into the result vector
            result.insert(result.end(), nums[i], nums[i + 1]);
        }

        return result; // Return the decompressed list
    }
};