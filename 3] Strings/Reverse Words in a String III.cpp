// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        // Create a stringstream to extract words from the input string
        stringstream ss(s);
        string word, result;

        // Iterate through each word in the stringstream
        while (ss >> word)
        {
            // Reverse the characters of the current word
            reverse(word.begin(), word.end());
            // Concatenate the reversed word to the result string with a space
            result += word + ' ';
        }

        // Remove the extra space at the end of the result string
        result.pop_back();

        // Return the final reversed words string
        return result;
    }
};
