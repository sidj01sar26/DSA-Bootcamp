// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingInteger(vector<int> &nums)
    {
        int countSum = nums[0];
        // Initialize countSum with the first element of the array

        // Calculate the sum of consecutive integers in the beginning of the array
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] + 1 == nums[i])
            {
                // If the current number is consecutive to the previous one
                countSum += nums[i];
                // Add it to the countSum
            }
            else
            {
                break; // Break the loop if the sequence is interrupted
            }
        }
        sort(nums.begin(), nums.end());
        // Sort the array in ascending order

        // Find the missing integer by checking if countSum exists in the sorted array
        for (int i = 0; i < nums.size(); i++)
        {
            if (countSum == nums[i])
            {
                // If countSum exists in the array
                countSum++;
                // Increment countSum
            }
        }
        return countSum; // Return the missing integer
    }
};
