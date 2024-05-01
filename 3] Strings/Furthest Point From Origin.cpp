// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int furthestDistanceFromOrigin(string moves)
    {
        // Initialize counters for left, right, and underscore moves
        int leftCount = 0, rightCount = 0, underscoreCount = 0;

        // Iterate through each move in the string
        for (char c : moves)
        {
            // Increment counters based on the type of move
            if (c == 'L') leftCount++;
            else if (c == 'R') rightCount++;
            else underscoreCount++;
        }

        // Return the maximum distance from origin
        // which is the difference between the maximum
        // of left and right counts and the minimum of them,
        // plus the number of underscore moves
        return max(leftCount, rightCount) - min(leftCount, rightCount) + underscoreCount;
    }
};