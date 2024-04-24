// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubstrings(string s)
    {
        int count = 0;    // Initialize a counter to count palindromic substrings
        int n = s.size(); // Get the length of the input string

        // Loop through each character in the string
        for (int i = 0; i < n; i++)
        {
            int left = i;  // Initialize left pointer for expanding around the current character
            int right = i; // Initialize right pointer for expanding around the current character

            // Expand around the current character if possible (odd-length palindromes)
            while (left >= 0 && right < n && s[left] == s[right])
            {
                count++; // Increment the counter for each valid palindrome found
                left--;  // Move left pointer towards the start of the string
                right++; // Move right pointer towards the end of the string
            }

            left = i;      // Reset left pointer to the current character
            right = i + 1; // Adjust right pointer for even-length palindromes

            // Expand around the current character and its right neighbor if possible (even-length palindromes)
            while (left >= 0 && right < n && s[left] == s[right])
            {
                count++; // Increment the counter for each valid palindrome found
                left--;  // Move left pointer towards the start of the string
                right++; // Move right pointer towards the end of the string
            }
        }

        return count; // Return the total count of palindromic substrings
    }
};
