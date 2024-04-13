// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the minimum number of operations needed
    // to make all elements of numsD divisible by a common number
    int minOperations(vector<int> &nums, vector<int> &numsD)
    {
        // Sorting the nums array
        sort(nums.begin(), nums.end());
        // Finding the greatest common divisor of elements in numsD
        int gcd_num = numsD[0];
        for (int i = 1; i < numsD.size(); i++)
        {
            // gcd_num = gcd(gcd_num, numsD[i]);
            gcd_num = __gcd(gcd_num, numsD[i]);
        }
        int c = 0; // Counter for the number of operations
        // Checking how many elements in nums are not divisible by gcd_num
        for (int i = 0; i < nums.size(); i++)
        {
            if (gcd_num % nums[i])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        // If all elements in nums are not divisible by gcd_num, return -1
        if (c == nums.size())
        {
            return -1;
        }
        else
        {
            return c;
        }
    }
};
