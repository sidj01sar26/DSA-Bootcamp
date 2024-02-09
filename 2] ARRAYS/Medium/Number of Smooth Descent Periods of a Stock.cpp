// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long getDescentPeriods(vector<int> &prices)
    {
        // Initialize ans with the size of prices
        long long ans = prices.size();
        // Variable to store the length of the current descent period
        long long temp = 0;

        // Iterate through the prices vector starting from the second element
        for (int i = 1; i < prices.size(); i++)
        {
            // Check if the current price is one less than the previous price
            if (prices[i - 1] - prices[i] == 1)
            {
                // If so, increment the length of the current descent period
                temp++;
                // Add the length of the current descent period to the total answer
                ans += temp;
            }
            else
            {
                // If the descent period ends, reset the length counter
                temp = 0;
            }
        }

        // Return the total number of descent periods
        return ans;
    }
};
