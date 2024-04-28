// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        vector<int> map(3, 0); // Vector to store the counts of 'a', 'b', and 'c'
        int ans = 0, i = 0;    // Initialize answer and start index

        for (int j = 0; j < s.size(); j++)
        {
            // Iterate through the string
            map[s[j] - 'a']++;
            // Increment count for the current character
            while (map[0] && map[1] && map[2])
            {
                // While all characters are present in the window
                ans += s.size() - j;
                // Increment answer by remaining substrings
                map[s[i++] - 'a']--;
                // Decrease count of character at start index
            }
        }

        return ans; // Return the total count of substrings
    }
};