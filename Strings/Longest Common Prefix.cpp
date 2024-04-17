// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix;
        // If the input vector is empty, return an empty prefix
        if (strs.empty())
        {
            return prefix;
        }

        // Iterate over characters of the first string in the vector
        for (int i = 0; i < strs[0].size(); i++)
        {
            // Get the current character of the first string
            char current_char = strs[0][i];
            // Check if the character matches for all strings in the vector
            for (const string &str : strs)
            {
                // If current index exceeds string length or character doesn't match, return the prefix
                if (i >= str.size() || str[i] != current_char)
                {
                    return prefix;
                }
            }
            // If all characters matched, add the character to the prefix
            prefix.push_back(current_char);
        }
        // Return the final common prefix
        return prefix;
    }
};
