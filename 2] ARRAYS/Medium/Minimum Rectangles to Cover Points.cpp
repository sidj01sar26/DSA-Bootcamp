// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the minimum number of rectangles needed to cover points
    int minRectanglesToCoverPoints(vector<vector<int>> &points, int w)
    {
        int ans = 1;                        // At least one rectangle is needed
        sort(points.begin(), points.end()); // Sort points based on x-coordinate

        int start = points[0][0]; // Start with the first point's x-coordinate
        // Loop through points
        for (int i = 1; i < points.size(); i++)
        {
            // If distance between current point and previous exceeds width 'w'
            if (points[i][0] - start > w)
            {
                ans++;                // Increment rectangle count
                start = points[i][0]; // Update start point to current point
            }
        }
        return ans; // Return minimum number of rectangles needed
    }
};
