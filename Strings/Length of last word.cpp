// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int index = 0;
        int result = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                index = 0;
            }
            else
            {
                index++;
                result = index;
            }
        }
        return result;
    }
};

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        // Initialize the variable to store the length of the last word
        int result = 0;

        // Loop through each character in the string
        for (int i = 0; i < s.size(); i++)
        {
            // If the current character is not a space, increment the length of the current word
            if (s[i] != ' ')
            {
                result++;
            }
            // If the current character is a space and the next character is not a space, reset the result
            else if (i + 1 < s.size() && s[i + 1] != ' ')
            {
                result = 0; // Reset if next character is not a space
            }
        }
        // Return the length of the last word
        return result;
    }
};
