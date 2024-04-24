// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        int count = 0; // Initialize count to keep track of differences

        // Create a frequency array to count occurrences of characters
        vector<int> frequency(26, 0);

        // Count occurrences of characters in string s
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            frequency[ch - 'a']++;
        }

        // Decrement the count for each character in string t
        for (int i = 0; i < t.size(); i++)
        {
            char ch = t[i];
            frequency[ch - 'a']--;
        }

        // Calculate total differences in frequencies
        for (int i = 0; i < 26; i++)
        {
            count += abs(frequency[i]);
        }

        return count; // Return the total count of differences
    }
};
