// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // Initialize minimum price to maximum integer value
        int minPrice = INT_MAX;
        // Initialize maximum profit to 0
        int maxProfit = 0;

        // Loop through the prices array
        for (int i = 0; i < prices.size(); i++)
        {
            // Update minimum price if current price is lower
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }

            // Calculate profit if selling today and update maximum profit
            int todayProfit = prices[i] - minPrice;
            maxProfit = max(maxProfit, todayProfit);
        }

        // Return the maximum profit
        return maxProfit;
    }
};