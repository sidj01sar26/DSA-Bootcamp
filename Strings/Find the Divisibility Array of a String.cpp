// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> divisibilityArray(string word, int m)
    {
        // Initialize a vector to store the result with the same size as the input string
        vector<int> ans(word.size(), 0);

        // Initialize a variable to store the remainder
        int t = 0;

        // Iterate through each character of the string
        for (int i = 0; i < word.size(); i++)
        {
            // Calculate the new remainder by adding the current digit to the previous remainder and taking modulo m
            t = (t * 10 + (word[i] - '0')) % m;

            // If the remainder is 0, it means the substring from the beginning is divisible by m
            if (t == 0)
            {
                // Set the corresponding index in the result vector to 1
                ans[i] = 1;
            }
        }

        // Return the result vector
        return ans;
    }
};