// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countBalls(int lowLimit, int highLimit)
    {
        // Initialize an unordered map to store the count of balls for each box
        unordered_map<int, int> mp;
        // Initialize a variable to store the maximum count of balls in any box
        int maxCount = 0;
        // Loop through each box from lowLimit to highLimit
        for (int i = lowLimit; i <= highLimit; i++)
        {
            // Initialize a variable to calculate the sum of digits in the current box number
            int sum = 0;
            // Calculate the sum of digits in the current box number
            for (int num = i; num > 0; num /= 10)
            {
                sum += num % 10;
            }
            // Increment the count of balls in the box corresponding to the sum of digits
            mp[sum]++;
            // Update the maximum count of balls
            maxCount = max(maxCount, mp[sum]);
        }
        // Return the maximum count of balls in any box
        return maxCount;
    }
};