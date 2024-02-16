// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        // Create unordered sets from the input vectors
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        // Declare vectors to store differences
        vector<int> diff1;
        vector<int> diff2;

        // Find differences between set1 and set2
        for (int num : set1)
        {
            if (set2.find(num) == set2.end())
            {
                // If num is not found in set2, it's a difference
                diff1.push_back(num);
            }
        }

        // Find differences between set2 and set1
        for (int num : set2)
        {
            if (set1.find(num) == set1.end())
            {
                // If num is not found in set1, it's a difference
                diff2.push_back(num);
            }
        }

        // Return a vector containing the two difference vectors
        return {diff1, diff2};
    }
};
