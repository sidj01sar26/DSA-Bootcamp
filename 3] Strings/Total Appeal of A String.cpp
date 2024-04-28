// Leetcode - Hard

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long appealSum(string s)
    {
        int n = s.size();  // Length of the string
        long long ans = 0; // Initialize answer

        // Iterate through each character from 'a' to 'z'
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int prev = 0;
            // Initialize previous index
            for (int i = 0; i < n; i++)
            {
                // Iterate through the string
                if (s[i] == ch)
                {
                    // If character matches current character
                    prev = i + 1;
                    // Update previous index
                }
                ans += prev; // Add previous index to answer
            }
        }
        return ans; // Return the final answer
    }
};