// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumValueSum(vector<int> &nums, int k, vector<vector<int>> &edges)
    {
        long long sumXor = 0, sumOrig = 0;
        int xorCount = 0;

        // Calculate initial sums and count
        for (int num : nums)
        {
            int xorValue = num ^ k;
            if (xorValue > num)
            {
                sumXor += xorValue;
                xorCount++;
            }
            else
            {
                sumOrig += num;
            }
        }

        // If the count of xor-values is even, return the sum directly
        if (xorCount % 2 == 0)
        {
            return sumXor + sumOrig;
        }

        // Calculate the maximum possible sum after one swap
        long long maxSum = sumXor + sumOrig;
        for (int num : nums)
        {
            int xorValue = num ^ k;
            if (xorValue > num)
            {
                maxSum = max(maxSum, sumXor - xorValue + sumOrig + num);
            }
            else
            {
                maxSum = max(maxSum, sumXor + xorValue + sumOrig - num);
            }
        }

        return maxSum;
    }
};
