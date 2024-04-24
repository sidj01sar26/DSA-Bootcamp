// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count pairs with a given difference
    int countPairs(const vector<int> &nums, int diff)
    {
        int count = 0;
        int j = 0;
        int n = nums.size();

        // Loop through the array to count pairs with the given difference
        for (int i = 0; i < n; i++)
        {
            // Move j to the right until the difference between nums[j] and nums[i] exceeds 'diff'
            while (j < n && nums[j] - nums[i] <= diff)
            {
                j++;
            }
            // Update the count by the number of pairs found within the range [i+1, j-1]
            count += j - i - 1;
        }

        // Return the count of pairs with the given difference
        return count;
    }

    // Function to find the kth smallest distance pair
    int smallestDistancePair(vector<int> &nums, int k)
    {
        // Sort the array
        sort(nums.begin(), nums.end());
        int low = 0;
        int high = nums.back() - nums.front();
        int ans = -1;

        // Binary search to find the kth smallest distance pair
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int count = countPairs(nums, mid);

            // Update 'ans' if the count of pairs with distance <= mid is >= k
            if (count >= k)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        // Return the kth smallest distance pair
        return ans;
    }
};
