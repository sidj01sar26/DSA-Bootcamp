// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to calculate the maximum width of a vertical area between points
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end()); // Sort points based on x-coordinate
        int maxWidth = 0;                   // Initialize variable to store maximum width

        // Iterate through sorted points
        for (int i = 1; i < points.size(); i++)
        {
            // Calculate the width between adjacent points along x-axis
            int width = points[i][0] - points[i - 1][0];

            // Update maxWidth if the calculated width is greater
            maxWidth = max(maxWidth, width);
        }

        // Return the maximum width of vertical area
        return maxWidth;
    }
};
