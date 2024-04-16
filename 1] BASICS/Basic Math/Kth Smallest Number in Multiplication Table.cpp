// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Find the kth smallest number in a multiplication table
    int findKthNumber(int m, int n, int k)
    {
        int l = 1, r = m * n;

        // Binary search to find the kth smallest number
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            int count = 0;
            // Count numbers less than or equal to mid in the multiplication table
            for (int i = 1; i <= m; i++)
            {
                count += min(mid / i, n);
            }
            // Narrow the search range based on the count
            if (count < k)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }

        // Return the kth smallest number
        return l;
    }
};