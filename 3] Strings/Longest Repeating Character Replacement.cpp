// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int start = 0, maxLength = 0, maxFreq = 0;
        // Initialize variables: start pointer, maxLength, and max frequency seen so far.
        vector<int> charCount(26, 0);
        // Vector to store counts of characters in the current window.

        for (int end = 0; end < s.length(); end++)
        {
            // Loop through the string.
            charCount[s[end] - 'A']++;
            // Increment the count of the current character.
            maxFreq = max(maxFreq, charCount[s[end] - 'A']);
            // Update maxFreq with the maximum count of any character seen so far.
            while (end - start + 1 - maxFreq > k)
            {
                // Check if the length of the current window minus the count of the most frequent character is greater than k.
                charCount[s[start] - 'A']--;
                // Decrement the count of the character at the start pointer.
                start++;
                // Move the start pointer to the right.
            }
            maxLength = max(maxLength, end - start + 1);
            // Update maxLength with the maximum length of a valid substring seen so far.
        }

        return maxLength;
        // Return the maximum length of a substring with at most k replacements.
    }
};