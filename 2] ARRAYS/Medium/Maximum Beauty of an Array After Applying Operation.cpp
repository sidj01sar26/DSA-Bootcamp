// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumBeauty(vector<int> &nums, int k)
    {
        // Sort the input array
        sort(nums.begin(), nums.end());
        // Initialize variables: start of window and maximum beauty
        int start = 0, ans = 0;
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++)
        {
            // Move start of window forward if window is not valid
            while (nums[i] - nums[start] > 2 * k)
            {
                start++;
            }
            // Update maximum beauty
            ans = max(ans, i - start + 1);
        }
        // Return maximum beauty
        return ans;
    }
};
