// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        // Find the index of the character 'ch' in the string
        int j = word.find(ch);
        // If the character is found
        if (j != -1)
        {
            // Reverse the substring from the beginning of the word to the index of 'ch'
            reverse(word.begin(), word.begin() + j + 1);
        }
        // Return the modified word
        return word;
    }
};

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        reverse(word.begin(), word.begin() + word.find(ch) + 1);
        return word;
    }
};