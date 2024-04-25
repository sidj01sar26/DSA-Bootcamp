// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int equalSubstring(string s, string t, int maxCost)
    {
        int n = s.length();           // Get the length of the strings
        int i = 0, ans = 0, cost = 0; // Initialize variables for the sliding window

        // Loop through the strings using a sliding window approach
        for (int j = 0; j < n; j++)
        {
            // Calculate the absolute difference in ASCII values between corresponding characters
            cost += abs(s[j] - t[j]);
            // If the cost exceeds the maximum allowed cost, move the left pointer of the window
            while (cost > maxCost)
            {
                cost -= abs(s[i] - t[i]);
                i++; // Move the left pointer to the right
            }
            // Update the maximum length of the substring with equal cost
            ans = max(ans, j - i + 1);
        }
        return ans; // Return the maximum length
    }
};