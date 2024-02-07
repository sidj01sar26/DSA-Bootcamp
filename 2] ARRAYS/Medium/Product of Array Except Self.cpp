// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        int totalProduct = 1;
        // Variable to store the total product of all elements in nums
        int zeroCount = 0;
        // Counter for the number of zeros in nums

        // Calculate total product of all non-zero elements and count the number of zeros
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                zeroCount++; // Increment zero count if the current element is zero
                continue;    // Move to the next iteration without updating totalProduct
            }
            totalProduct *= nums[i];
            // Update total product by multiplying with current non-zero element
        }

        vector<int> output(n, 0); // Initialize output vector with zeros

        // If there are no zeros in nums
        if (zeroCount == 0)
        {
            // Divide the total product by each element to get the product except self
            for (int i = 0; i < n; i++)
            {
                output[i] = totalProduct / nums[i];
            }
        }
        // If there is exactly one zero in nums
        else if (zeroCount == 1)
        {
            // Find the index of the zero in nums and set the corresponding element in output to the total product
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    output[i] = totalProduct;
                    break;
                    // Break the loop after setting the output for the zero element
                }
            }
        }

        return output; // Return the resulting product except self
    }
};
