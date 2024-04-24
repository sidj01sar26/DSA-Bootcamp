// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countHomogenous(string s)
    {
        // Initialize variables for the left index and the result.
        int left = 0;
        long long res = 0;

        // Loop through the characters in the string.
        for (int right = 0; right < s.length(); right++)
        {
            // Check if the current character is the same as the one at the left index.
            if (s[left] == s[right])
            {
                // If so, accumulate the length of the current homogeneous substring.
                res += right - left + 1;
            }
            else
            {
                // If not, add 1 to the result and update the left index to the current position.
                res += 1;
                left = right;
            }
        }

        // Return the result modulo 1000000007 as the final count of homogeneous substrings.
        return int(res % 1000000007);
    }
};
