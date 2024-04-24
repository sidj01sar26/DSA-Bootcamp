// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string &s, int start, int end)
    {
        // Loop until start and end pointers meet
        while (start < end)
        {
            // If characters at start and end don't match, it's not a palindrome
            if (s[start] != s[end])
            {
                return false;
            }
            // Move start pointer forward and end pointer backward
            start++;
            end--;
        }
        // If the loop completes without returning false, it's a palindrome
        return true;
    }

    // Function to find the longest palindrome substring in a given string
    string longestPalindrome(string s)
    {
        // Initialize an empty string to store the longest palindrome found
        string answer = "";
        // Nested loops to generate all possible substrings
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                // Check if the current substring (from i to j) is a palindrome
                if (isPalindrome(s, i, j))
                {
                    // If it's a palindrome, update the answer if it's longer
                    string t = s.substr(i, j - i + 1);
                    answer = t.size() > answer.size() ? t : answer;
                }
            }
        }
        // Return the longest palindrome substring found
        return answer;
    }
};