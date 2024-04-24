// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getSmallestString(string s, int k)
    {
        // Loop through each character in the string
        for (int i = 0; i < s.size(); i++)
        {
            char &ch = s[i]; // Reference to the current character
            // Calculate the difference needed to change the character to 'a'
            int diff = min(ch - 'a', 'z' - ch + 1);
            // If there is enough remaining changes to make
            if (k >= diff)
            {
                k -= diff; // Decrement the remaining changes by the difference
                ch = 'a';  // Change the character to 'a'
            }
            else
            {            // If there's not enough remaining changes
                ch -= k; // Adjust the character by the remaining changes needed
                break;   // Exit the loop since all changes have been applied
            }
        }
        return s; // Return the modified string
    }
};
