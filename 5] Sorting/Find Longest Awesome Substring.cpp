// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestAwesome(string s)
    {
        // HashMap to store the first occurrence of each mask value
        unordered_map<int, int> maskTable{{0, -1}};
        int ans = 0, mask = 0;

        for (int i = 0; i < s.size(); i++)
        {
            // Update the mask by flipping the bit corresponding to the current digit
            mask ^= (1 << (s[i] - '0'));

            // If the current mask has been seen before, update the answer
            if (maskTable.count(mask))
            {
                ans = max(ans, i - maskTable[mask]);
            }
            // Otherwise, store the first occurrence of the current mask
            else
            {
                maskTable[mask] = i;
            }

            // Special case: if the mask is 0 or a power of 2 (only one bit set)
            // This means all characters up to the current position can form a palindrome
            if (mask == 0 || (mask & (mask - 1)) == 0)
            {
                ans = max(ans, i + 1);
            }

            // Check all masks that differ by exactly one bit (one digit odd frequency)
            for (int pos = 0; pos <= 9; pos++)
            {
                int newMask = mask ^ (1 << pos);
                if (maskTable.count(newMask))
                {
                    ans = max(ans, i - maskTable[newMask]);
                }
            }
        }

        return ans;
    }
};