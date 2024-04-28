// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countVowels(string word)
    {
        long long count = 0;   // Initialize count
        int len = word.size(); // Length of the word

        for (int pos = 0; pos < len; pos++)
        {
            // Iterate through each character in the word
            char ch = word[pos];
            // Get the character at the current position
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                // Check if it's a vowel
                count += (long)(len - pos) * (long)(pos + 1);
                // Increment count by the product of positions
            }
        }

        return count; // Return the count of vowels
    }
};