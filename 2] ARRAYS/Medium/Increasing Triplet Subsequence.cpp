// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        // Initialize two variables to store the smallest and second smallest numbers seen so far.
        int smallest1 = INT_MAX;
        // Initialize smallest1 with the maximum possible integer value.
        int smallest2 = INT_MAX;
        // Initialize smallest2 with the maximum possible integer value.

        // Iterate through the elements of the input vector.
        for (int i = 0; i < nums.size(); ++i)
        {
            int x = nums[i]; // Get the current number from the vector.

            // Check if the current number is smaller than or equal to the smallest number seen so far.
            if (x <= smallest1)
            {
                smallest1 = x;
                // Update smallest1 if the current number is smaller or equal.
            }

            // Check if the current number is greater than smallest1 but smaller than or equal to smallest2.
            else if (x <= smallest2)
            {
                smallest2 = x;
                // Update smallest2 if the current number is greater than smallest1 but smaller or equal to smallest2.
            }

            // If the current number is greater than both smallest1 and smallest2, we found our increasing triplet.
            else
            {
                return true;
                // Return true indicating an increasing triplet is found.
            }
        }

        // If no increasing triplet is found after iterating through the entire vector, return false.
        return false;
    }
};
