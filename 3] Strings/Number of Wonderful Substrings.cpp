// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long wonderfulSubstrings(string word)
    {
        unordered_map<int, int> count;
        // Map to store counts of different masks
        int mask = 0;
        // Mask to track the parity of characters encountered so far
        count[0] = 1;
        // Initialize count of empty mask (no characters)
        long long result = 0;
        // Variable to store the result
        for (char c : word)
        {
            // Iterate through each character in the word
            int bit = 1 << (c - 'a');
            // Calculate the bit for the current character
            mask ^= bit;
            // Toggle the bit corresponding to the current character
            result += count[mask];
            // Increment result by the count of the current mask
            for (int i = 0; i < 10; i++)
            {
                // Check all possible one-bit differences
                result += count[mask ^ (1 << i)];
                // Increment result by the count of masks with one-bit difference
            }
            count[mask]++; // Increment the count of the current mask
        }
        return result; // Return the total count of wonderful substrings
    }
};