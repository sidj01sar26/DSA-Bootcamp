// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countQuadruplets(vector<int> &nums)
    {
        // Initialize count to 0 to count the number of quadruplets found
        int count = 0;

        // Loop through the vector, considering each element as the first number of the quadruplet
        for (int i = 0; i < nums.size() - 3; i++)
        {
            // Loop through the vector, considering each element as the second number of the quadruplet
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                // Loop through the vector, considering each element as the third number of the quadruplet
                for (int k = j + 1; k < nums.size() - 1; k++)
                {
                    // Loop through the vector, considering each element as the fourth number of the quadruplet
                    for (int l = k + 1; l < nums.size(); l++)
                    {
                        // Check if the sum of the first three numbers equals the fourth number
                        if (nums[i] + nums[j] + nums[k] == nums[l])
                        {
                            // If true, increment the count
                            count++;
                        }
                    }
                }
            }
        }
        // Return the total count of quadruplets found
        return count;
    }
};
