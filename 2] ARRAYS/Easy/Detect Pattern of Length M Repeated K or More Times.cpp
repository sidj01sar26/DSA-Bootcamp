// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsPattern(vector<int> &arr, int m, int k)
    {
        int ans = 0; // Initialize a counter to keep track of pattern matches

        // Iterate through the array, stopping when the remaining elements are less than m
        for (int i = 0; i + m < arr.size(); i++)
        {
            // Check if the current element matches the element m positions ahead
            if (arr[i] != arr[i + m])
            {
                ans = 0; // Reset the counter if there is no match
            }
            else
            {
                ans++; // Increment the counter if there is a match
            }

            // Check if the number of matches is enough to form k consecutive patterns
            if (ans == (k - 1) * m)
            {
                return true; // Return true if the pattern is found
            }
        }

        return false; // Return false if no such pattern is found
    }
};