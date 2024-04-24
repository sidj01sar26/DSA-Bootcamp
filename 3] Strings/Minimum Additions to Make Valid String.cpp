// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int addMinimum(string word)
    {
        int n = word.size(); // Number of characters in the input string
        int i = 0, res = 0;  // Iterator and result variables

        // Loop through each character in the input string
        while (i < n)
        {
            int count = 0; // Count of 'a', 'b', 'c' occurrences

            if (word[i++] == 'a')
            {
                count++; // Increment count if current char is 'a'
            }
            if (i < n && word[i++] == 'b')
            {
                count++; // Increment count if current char is 'b'
            }
            if (i < n && word[i++] == 'c')
            {
                count++; // Increment count if current char is 'c'
            }

            res += 3 - count; // Calculate additional characters needed
        }

        return res; // Return the result
    }
};
