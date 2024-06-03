// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> sortedHeights = heights;              
        // Create a copy of the original heights vector
        sort(sortedHeights.begin(), sortedHeights.end()); 
        // Sort the copied vector

        int count = 0; 
        // Initialize a counter for the number of mismatched heights

        // Iterate through the original and sorted vectors
        for (int i = 0; i < heights.size(); i++)
        {
            // If the height in the original vector does not match the height in the sorted vector
            if (heights[i] != sortedHeights[i])
            {
                count++; // Increment the counter
            }
        }

        return count; // Return the total count of mismatches
    }
};