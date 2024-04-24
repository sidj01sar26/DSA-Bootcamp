// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if a substring of 's' from index 'start' to 'end' is a palindrome
    bool isPalindrome(string s, int start, int end)
    {
        while (start < end)
        {
            // Loop until start is less than end
            if (s[start++] != s[end--])
            {
                // Compare characters at start and end indices, then move them inward
                return false;
                // If characters are not equal, it's not a palindrome
            }
        }
        return true; // If all characters matched, it's a palindrome
    }

    // Function to check if the given string 's' can be made a palindrome by deleting at most one character
    bool validPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1; // Start with the first and last indices of the string

        while (i < j)
        {
            // Loop until i is less than j
            if (s[i] != s[j])
            {
                // If characters at indices i and j are not equal
                // Check if excluding character at index i or j makes the remaining string a palindrome
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
            i++; // Move i towards the center
            j--; // Move j towards the center
        }
        return true;
        // If the loop completes without finding any non-matching characters, the string is already a palindrome
    }
};
