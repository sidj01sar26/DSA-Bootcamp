// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        int totalSum = 0; // Initialize the total sum of XORs of all subsets

        // Iterate through all possible subsets using bitwise representation
        for (int i = 0; i < (1 << nums.size()); i++)
        {
            int subsetXor = 0; // Initialize the XOR for the current subset

            // Iterate through each element to check if it is in the current subset
            for (int j = 0; j < nums.size(); j++)
            {
                // If the j-th bit in i is set, include nums[j] in the subset
                if (i & (1 << j))
                {
                    subsetXor ^= nums[j]; // Compute XOR for the current subset
                }
            }

            // Add the XOR of the current subset to the total sum
            totalSum += subsetXor;
        }

        return totalSum; // Return the total sum of XORs of all subsets
    }
};
