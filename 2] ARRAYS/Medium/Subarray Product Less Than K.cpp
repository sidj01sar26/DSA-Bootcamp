// Leetcode

#include <vector>
using namespace std;

class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int ans = 0;                          // Initialize the answer counter
        int product = 1, left = 0, right = 0; // Initialize product, left, and right pointers

        // Loop until the right pointer reaches the end of the array
        while (right < nums.size())
        {
            product *= nums[right++]; // Update product by multiplying with the current element and move the right pointer

            // Shrink the sliding window by moving the left pointer until the product is less than k
            while (product >= k && left < right)
            {
                product /= nums[left++]; // Divide product by the element at the left pointer and move the left pointer
            }

            // Increment the answer by the size of the current subarray
            ans += right - left;
        }

        // Return the total number of subarrays with product less than k
        return ans;
    }
};