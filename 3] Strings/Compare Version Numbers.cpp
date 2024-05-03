// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compareVersion(string v1, string v2)
    {
        // Get the lengths of both version strings
        int n1 = v1.size(), n2 = v2.size();
        // Initialize iterators for both strings
        int i = 0, j = 0;

        // Iterate through both strings until one of them ends
        while (i < n1 || j < n2)
        {
            // Variables to store the numeric value of each part of the version string
            int num1 = 0, num2 = 0;

            // Extract numeric value from v1 until a dot or end of string is encountered
            while (i < n1 && v1[i] != '.')
            {
                num1 = num1 * 10 + (v1[i++] - '0');
            }

            // Extract numeric value from v2 until a dot or end of string is encountered
            while (j < n2 && v2[j] != '.')
            {
                num2 = num2 * 10 + (v2[j++] - '0');
            }

            // Compare the extracted numeric values
            if (num1 < num2) return -1;
            else if (num1 > num2) return 1;

            // Move to the next part of the version strings
            i++;
            j++;
        }

        // If both version strings are identical so far, return 0
        return 0;
    }
};