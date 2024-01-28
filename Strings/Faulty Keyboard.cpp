// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string finalString(const string &s)
    {
        string ans = ""; // Initialize an empty string to store the final result

        // Iterate through each character in the input string 's'
        for (char c : s)
        {
            // If the current character is not 'i', append it to the result string
            if (c != 'i')
            {
                ans += c;
            }
            else
            {
                // If the current character is 'i', reverse the result string
                reverse(ans.begin(), ans.end());
            }
        }

        // Return the final result string after processing all characters
        return ans;
    }
};