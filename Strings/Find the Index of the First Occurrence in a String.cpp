// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        // Get the sizes of haystack and needle
        int n = haystack.size();
        int m = needle.size();

        // Loop through each possible starting index of a substring in haystack
        for (int i = 0; i <= n - m; i++)
        {
            // Check if needle matches the substring starting at index i
            for (int j = 0; j < m; j++)
            {
                // If characters don't match, break out of the loop
                if (needle[j] != haystack[i + j])
                {
                    break;
                }
                // If all characters match, return the starting index i
                if (j == m - 1)
                {
                    return i;
                }
            }
        }
        // If needle is not found in haystack, return -1
        return -1;
    }
};