// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int total = 0;
        // Total score
        int n = cardPoints.size();
        // Size of cardPoints
        // Calculate total by summing up first k elements
        for (int i = 0; i < k; i++)
        {
            total += cardPoints[i];
        }
        int curr = total;
        // Current score
        // Sliding window to find max score
        for (int i = k - 1; i >= 0; i--)
        {
            curr -= cardPoints[i];         // Subtract outgoing element
            curr += cardPoints[n - k + i]; // Add incoming element
            total = max(total, curr);      // Update max score
        }
        return total; // Return max score
    }
};
