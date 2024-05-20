// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int ans = 0;              // Total time
        int n = tickets.size();   // Size of ticket vector
        int element = tickets[k]; // Price of ticket at index k

        // Iterate through tickets
        for (int i = 0; i < n; i++)
        {
            // If ticket index is <= k, add min of price of kth ticket and current ticket
            if (i <= k)
                ans += min(element, tickets[i]);
            // If ticket index is > k, add min of (price of kth ticket - 1) and current ticket
            else
                ans += min(element - 1, tickets[i]);
        }

        return ans; // Return total time
    }
};
