// Leetcode - Hard

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumBoxes(int n)
    {
        // Initialize variables: base (number of boxes in the current layer),
        // row (number of rows), and sum (total number of boxes).
        int base = 1, row = 1, sum = 1;

        // Incrementally add boxes until the total number of boxes is greater than or equal to n.
        while (sum < n)
        {
            // Increase base by the number of boxes in the current row.
            base += (++row);
            // Add the new base to the total sum.
            sum += base;
        }

        // If the total number of boxes exceeds n, remove boxes until it's equal to n.
        while (sum > n)
        {
            // Decrement sum by the number of boxes in the current row.
            sum -= (row--);
            // Decrement base.
            --base;
        }

        // Check if the total number of boxes is less than n.
        if (sum < n)
        {
            // If so, add one more box to meet the requirement.
            return base + 1;
        }
        else
        {
            // Otherwise, return the current base value.
            return base;
        }
    }
};
