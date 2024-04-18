// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairs(vector<int> &nums, int k)
    {
        int pairs = 0; // Initialize pairs counter

        // Loop through each pair of indices in the array
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                // Check if the product of indices is divisible by k
                // and if the elements at these indices are equal
                if (((i * j) % k == 0) && (nums[i] == nums[j]))
                {
                    pairs++; // Increment pairs count
                }
            }
        }

        return pairs; // Return the total count of pairs
    }
};