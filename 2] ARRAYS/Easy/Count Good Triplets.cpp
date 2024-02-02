// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countGoodTriplets(vector<int> &nums, int a, int b, int c)
    {
        int count = 0;       // Initialize a counter for good triplets
        int n = nums.size(); // Get the size of the input vector

        // Iterate through all possible combinations of three numbers
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // Check the condition for the first constraint (|nums[i] - nums[j]| <= a)
                if (abs(nums[i] - nums[j]) <= a)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        // Check the condition for the second constraint (|nums[k] - nums[j]| <= b) and the third constraint (|nums[k] - nums[i]| <= c)
                        if (abs(nums[k] - nums[j]) <= b && abs(nums[k] - nums[i]) <= c)
                        {
                            count++; // If all conditions are met, increment the counter
                        }
                    }
                }
            }
        }
        return count; // Return the total count of good triplets
    }
};
