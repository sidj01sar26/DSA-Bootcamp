// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        int jumps = 0;
        int currentEnd = 0; // The current furthest reachable position
        int farthest = 0;   // The furthest position reachable by taking one more jump

        for (int i = 0; i < n - 1; i++)
        {
            farthest = max(farthest, i + nums[i]);

            // If we have reached the end of the current jump, take a jump to the furthest reachable position
            if (i == currentEnd)
            {
                currentEnd = farthest;
                jumps++;
            }
        }

        return jumps;
    }
};
