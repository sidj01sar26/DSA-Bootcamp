// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int firstOcc = -1;
        int lastOcc = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                firstOcc = (firstOcc == -1) ? i : firstOcc;
                lastOcc = i;
            }
        }

        return {firstOcc, lastOcc};
    }
};
