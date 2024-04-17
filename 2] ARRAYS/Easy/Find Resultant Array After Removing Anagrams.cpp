// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> removeAnagrams(vector<string> &words)
    {
        // Loop through the vector starting from the second element
        for (int i = 1; i < words.size(); i++)
        {
            // Store the current and previous words
            string s1 = words[i];     // Current word
            string s2 = words[i - 1]; // Previous word
            // Sort both strings to check if they are anagrams
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            // If the sorted strings are equal, it means they are anagrams
            if (s1 == s2)
            {
                // Remove the current word from the vector
                words.erase(words.begin() + i);
                // Decrement the index to account for the removed element
                i--;
            }
        }
        // Return the vector with anagrams removed
        return words;
    }
};