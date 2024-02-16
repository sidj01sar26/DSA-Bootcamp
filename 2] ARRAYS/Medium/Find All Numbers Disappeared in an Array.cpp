// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> results; // Vector to store disappeared numbers

        // Mark elements that appear in the array by negating the value at their corresponding index - 1
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[abs(nums[i]) - 1] > 0)
            {                                 
                // Check if the value at the corresponding index is positive
                nums[abs(nums[i]) - 1] *= -1; 
                // Mark the presence of the number by making the value negative
            }
        }

        // Traverse through the array and find positive elements; their index + 1 represents disappeared numbers
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] > 0)
            {                             
                // Positive value indicates the absence of number i + 1 in the array
                results.push_back(i + 1); 
                // Store the disappeared number
            }
        }

        return results; // Return the vector containing disappeared numbers
    }
};
