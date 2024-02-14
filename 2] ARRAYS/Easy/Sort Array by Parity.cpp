#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> result; // Create a new vector to store the sorted array

        // First pass: add even numbers to the result vector
        for (int i = 0; i < nums.size(); i++) // Iterate through the input vector
        {
            if (nums[i] % 2 == 0) // Check if the current number is even
            {
                result.push_back(nums[i]); // If even, add it to the result vector
            }
        }

        // Second pass: add odd numbers to the result vector
        for (int i = 0; i < nums.size(); i++) // Iterate through the input vector again
        {
            if (nums[i] % 2 == 1) // Check if the current number is odd
            {
                result.push_back(nums[i]); // If odd, add it to the result vector
            }
        }

        return result; // Return the sorted array
    }
};
