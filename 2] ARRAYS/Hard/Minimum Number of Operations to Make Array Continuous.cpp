// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        // Sort the input array
        sort(nums.begin(), nums.end());

        // Get the size of the array
        int n = nums.size();

        // Initialize variables to keep track of maximum count and current count
        int maxCount = 1, currentCount = 1;

        // Initialize the left pointer
        int left = 0;

        // Iterate through the array from index 1 to n-1
        for (int right = 1; right < n; right++)
        {
            // If the current element is equal to the previous element, continue to next iteration
            if (nums[right] == nums[right - 1])
            {
                continue;
            }

            // Check the difference between current and left pointers
            while (nums[right] - nums[left] > n - 1)
            {
                // If there are duplicates at left pointer, adjust current count
                if (left < n && nums[left + 1] == nums[left])
                {
                    currentCount++;
                }

                // Move the left pointer
                left++;

                // Decrease the current count
                currentCount--;
            }

            // Update the maximum count
            maxCount = max(maxCount, ++currentCount);
        }

        // Return the minimum number of operations required
        return n - maxCount;
    }
};