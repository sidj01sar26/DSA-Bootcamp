// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the maximum number of vowels in any substring of length k
    int maxVowels(string s, int k)
    {
        int maxVowels = 0, currentVowels = 0; // Variables to keep track of maxVowels and currentVowels

        // Loop through the first k characters to count vowels
        for (int i = 0; i < k; i++)
        {
            if (isVowel(s[i]))
            {                    // Check if the character is a vowel
                currentVowels++; // Increment the count of vowels
            }
        }

        maxVowels = currentVowels; // Update maxVowels with the count of vowels in the initial substring of length k

        // Iterate through the remaining characters in s
        for (int i = k; i < s.size(); i++)
        {
            if (isVowel(s[i - k]))
            {                    // If the character leaving the window was a vowel
                currentVowels--; // Decrement the count of vowels
            }
            if (isVowel(s[i]))
            {                    // If the character entering the window is a vowel
                currentVowels++; // Increment the count of vowels
            }

            maxVowels = max(maxVowels, currentVowels); // Update maxVowels with the maximum count of vowels seen so far
        }

        return maxVowels; // Return the maximum count of vowels found in any substring of length k
    }

private:
    // Function to check if a character is a vowel
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
