// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();               
        // Get the length of the input string
        int maxLength = 0;                
        // Initialize the maximum length of the substring without repeating characters
        unordered_map<char, int> charMap; 
        // Use an unordered_map to store characters and their indices
        int left = 0;                     
        // Initialize the left pointer for the sliding window

        // Loop through the string using a sliding window approach
        for (int right = 0; right < n; right++)
        {
            // If the current character is already in the map, update the left pointer
            if (charMap.find(s[right]) != charMap.end())
            {
                left = max(left, charMap[s[right]] + 1);
            }
            // Update the index of the current character in the map
            charMap[s[right]] = right;
            // Update the maximum length of the substring without repeating characters
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength; // Return the maximum length
    }
};