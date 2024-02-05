// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDifference(vector<int> &nums)
    {
        // If the number of elements in the vector is less than or equal to 4,
        // it's not possible to leave only 3 distinct elements,
        // so the minimum difference will always be 0.
        if (nums.size() <= 4)
        {
            return 0;
        }

        // Sorting the array to easily access the smallest and largest elements.
        sort(nums.begin(), nums.end());

        int n = nums.size();

        // Calculating the differences between the largest and smallest elements
        // when we remove one of the 4 largest and one of the 4 smallest elements.
        int diff1 = nums[n - 4] - nums[0]; // removing 3 largest, 1 smallest
        int diff2 = nums[n - 3] - nums[1]; // removing 2 largest, 2 smallest
        int diff3 = nums[n - 2] - nums[2]; // removing 1 largest, 3 smallest
        int diff4 = nums[n - 1] - nums[3]; // removing 0 largest, 4 smallest

        // Finding the minimum difference among all these cases.
        int minDiff = min({diff1, diff2, diff3, diff4});
        return minDiff;
    }
};