// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        // Initialize two variables to keep track of the bits
        int ones = 0, twos = 0;

        // Iterate through the numbers in the vector
        for (int i = 0; i < nums.size(); i++)
        {
            // Update 'ones':
            // XOR the current number with 'ones', and then AND the result with the negation of 'twos'
            // This operation ensures that 'ones' only holds the bits that appear once so far
            ones = (ones ^ nums[i]) & ~twos;

            // Update 'twos':
            // XOR the current number with 'twos', and then AND the result with the negation of 'ones'
            // This operation ensures that 'twos' holds the bits that appear twice so far
            twos = (twos ^ nums[i]) & ~ones;
        }

        // After the loop, 'ones' will hold the bits of the single number that appeared only once
        return ones;
    }
};
