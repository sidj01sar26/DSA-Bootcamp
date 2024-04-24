// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countKeyChanges(string s)
    {
        // Initialize the answer variable to 0
        int ans = 0;
        // Iterate through the string starting from the second character
        for (int i = 1; i < s.size(); i++)
        {
            // Check if the current character and the previous character,
            // after converting both to lowercase, are different
            if (tolower(s[i]) != tolower(s[i - 1]))
            {
                // If they are different, increment the answer count
                ans++;
            }
        }
        // Return the total count of key changes
        return ans;
    }
};
