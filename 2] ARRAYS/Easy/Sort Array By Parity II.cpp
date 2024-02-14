// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        // Initialize two pointers for even and odd positions
        int even = 0, odd = 1;
        int n = nums.size(); // Get the size of the input array

        // Iterate through the array until one of the pointers exceeds the array size
        while (even < n && odd < n)
        {
            // If the number at the even position is already even, move to the next even position
            if (nums[even] % 2 == 0)
            {
                even += 2;
            }
            // If the number at the odd position is already odd, move to the next odd position
            else if (nums[odd] % 2 == 1)
            {
                odd += 2;
            }
            // If the number at the even position is odd and the number at the odd position is even, swap them
            else
            {
                swap(nums[even], nums[odd]);
            }
        }

        // Return the modified array
        return nums;
    }
};
