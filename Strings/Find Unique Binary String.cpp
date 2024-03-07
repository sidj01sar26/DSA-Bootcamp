// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        string ans = ""; // Initialize an empty string to store the result

        // Iterate through each string in the vector
        for (int i = 0; i < nums.size(); ++i)
        {
            // Check the character at position 'i' in the current string
            if (nums[i][i] == '0')
            {               // If it's '0',
                ans += '1'; // Append '1' to the result string
            }
            else
            {               // If it's '1',
                ans += '0'; // Append '0' to the result string
            }
        }
        return ans; // Return the final result string
    }
};
