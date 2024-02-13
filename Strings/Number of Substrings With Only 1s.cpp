// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSub(string s)
    {
        // Define a constant for modulo operation
        const int MOD = 1000000007;

        // Initialize variables for answer and count of consecutive '1's
        long ans = 0, count = 0;

        // Iterate through each character of the string
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];

            // If the current character is '1', increment count
            if (c == '1')
            {
                count = count + 1;
            }
            // If the current character is not '1', reset count to 0
            else
            {
                count = 0;
            }

            // Update the answer by adding the current count and taking modulo
            ans = (ans + count) % MOD;
        }

        // Return the final answer
        return ans;
    }
};
