// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMaximumGenerated(int n)
    {
        // If n is less than 2, return n itself
        if (n < 2)
            return n;

        // Initialize an array to store generated numbers
        int arr[n + 1];
        arr[0] = 0, arr[1] = 1; // First two elements are initialized to 0 and 1

        // Variable to track the maximum value in the array
        int m = 1;

        // Generate the remaining numbers using the given formula
        for (int i = 2; i <= n; i++)
        {
            // If i is even, use the value at i / 2
            // If i is odd, use the value at i / 2 and i / 2 + 1
            arr[i] = arr[i / 2] + i % 2 * arr[i / 2 + 1];
            // Update the maximum value if necessary
            m = max(arr[i], m);
        }

        // Return the maximum value found
        return m;
    }
};