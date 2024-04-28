// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countVowelSubstrings(string s)
    {
        int res = 0;
        // Initialize result
        unordered_set<char> set;
        // Store unique vowels

        for (int i = 0; i < s.size(); i++)
        {
            set.clear();
            // Clear set for each starting character
            for (int j = i; j < s.size(); j++)
            {
                // Loop from current character to end
                if (!isVowel(s[j]))
                {
                    // If not a vowel, break inner loop
                    break;
                }
                set.insert(s[j]); // Insert vowel into set
                if (set.size() == 5)
                {
                    // If set has all vowels, increment result
                    res++;
                }
            }
        }
        return res; // Return result
    }

    bool isVowel(char c)
    {
        // Check if character is a vowel
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};