// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int triangleNumber(vector<int> &nums)
    {
        // Sort the input array to make it easier to identify triplets
        sort(nums.begin(), nums.end());

        // Initialize a counter to keep track of the number of valid triplets
        int count = 0;

        // Get the size of the input array
        int n = nums.size();

        // Iterate over the array starting from the end, as we're looking for the largest numbers to form a triangle
        for (int i = n - 1; i >= 2; i--)
        {
            // Initialize two pointers: one at the beginning of the array and one at the index before the current index
            int left = 0, right = i - 1;

            // Continue the loop until the left pointer is less than the right pointer
            while (left < right)
            {
                // If the sum of the numbers at left and right indices is greater than the number at index i,
                // then it means that all the elements between left and right (inclusive) can form triangles with nums[i]
                if (nums[left] + nums[right] > nums[i])
                {
                    // Increment the count by the number of such valid combinations
                    count += right - left;
                    // Decrement the right pointer to consider smaller numbers from the right side
                    right--;
                }
                else
                {
                    // If the sum is not greater, move the left pointer to the right to consider larger numbers from the left side
                    left++;
                }
            }
        }

        // Return the total count of valid triangles
        return count;
    }
};
