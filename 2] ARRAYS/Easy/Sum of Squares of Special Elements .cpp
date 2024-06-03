// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfSquares(vector<int> &nums)
    {
        int n = nums.size(); // Get the size of the input array
        int sum = 0;         // Initialize the sum of squares to 0

        // Iterate through the indices from 1 to n (inclusive)
        for (int i = 1; i <= n; i++)
        {
            // Check if the index i is a divisor of n
            if (n % i == 0)
            {
                // Add the square of the corresponding element in the array to the sum
                sum += nums[i - 1] * nums[i - 1];
            }
        }

        return sum; // Return the total sum of squares of the elements at divisor indices
    }
};
