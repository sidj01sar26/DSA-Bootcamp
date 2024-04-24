// Leetcode

#include <bits/stdc++.h> 
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        // Define a lambda function to check if a character is a vowel
        auto isVowel = [](char ch)
        {
            ch = tolower(ch);                                                     // Convert character to lowercase for case-insensitive comparison
            return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; // Return true if character is a vowel
        };

        int low = 0;             // Initialize low pointer
        int high = s.size() - 1; // Initialize high pointer

        // Loop until low pointer is less than high pointer
        while (low < high)
        {
            // If both characters at low and high pointers are vowels
            if (isVowel(s[low]) && isVowel(s[high]))
            {
                // Swap characters at low and high pointers and move pointers inward
                swap(s[low++], s[high--]);
            }
            // If character at low pointer is not a vowel
            else if (!isVowel(s[low]))
            {
                // Move low pointer inward
                low++;
            }
            // If character at high pointer is not a vowel
            else
            {
                // Move high pointer inward
                high--;
            }
        }
        // Return the modified string after reversing vowels
        return s;
    }
};
