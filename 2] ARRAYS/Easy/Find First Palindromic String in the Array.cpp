// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the first palindrome in a vector of words
    string firstPalindrome(vector<string> &words)
    {
        // Iterate through each word in the vector using a traditional for loop
        for (int j = 0; j < words.size(); j++)
        {
            // Copy the current word to a string variable 's'
            string s = words[j];

            // Reverse the characters in the string 's'
            reverse(s.begin(), s.end());

            // Check if the reversed string is equal to the original word
            if (s == words[j])
            {
                // If it is, then the word is a palindrome, return it
                return s;
            }
        }

        // If no palindrome is found, return an empty string
        return "";
    }
};