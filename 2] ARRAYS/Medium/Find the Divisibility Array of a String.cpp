// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> divisibilityArray(string word, int m)
    {
        // Get the length of the input string.
        int n = word.length();
        // Initialize a vector to store the result, initially filled with zeros.
        vector<int> ans(n, 0);
        // Initialize a variable to store the numerical value of the current prefix.
        long long num = 0;
        // Iterate through each character in the input string.
        for (int i = 0; i < n; i++)
        {
            // Update the numerical value of the prefix by appending the current digit.
            num = num * 10 + (word[i] - '0');
            // If the numerical value of the prefix is divisible by m, mark it as divisible.
            if (num % m == 0)
            {
                ans[i] = 1;
            }
            // Reduce the numerical value to avoid overflow and keep it within range.
            num %= m;
        }
        // Return the array indicating divisibility of each prefix.
        return ans;
    }
};