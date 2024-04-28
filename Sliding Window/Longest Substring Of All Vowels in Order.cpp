// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestBeautifulSubstring(string word)
    {
        int longest = 0, count = 1, start = 0; // Initialize variables for tracking longest substring length, current streak count, and start index of the streak

        for (int i = 1; i < word.length(); i++)
        { // Iterate through the characters of the input word
            if (word[i - 1] < word[i])
            {            // If the current character is lexicographically less than the previous one
                count++; // Increment the streak count
            }
            else if (word[i - 1] > word[i])
            {              // If the current character is lexicographically greater than the previous one
                start = i; // Update the start index of the streak to the current index
                count = 1; // Reset the streak count to 1
            }
            if (count == 5)
            {                                          
                // If the streak count reaches 5 (indicating a "aeiou" sequence)
                longest = max(longest, i - start + 1); 
                // Update the longest substring length if necessary
            }
        }

        return longest; // Return the length of the longest beautiful substring
    }
};