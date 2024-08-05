// https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/description/?envType=daily-question&envId=2024-08-04

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int prefix = 0;
            for (int j = i; j < n; j++)
            {
                prefix += nums[j];
                arr.push_back(prefix);
            }
        }

        sort(arr.begin(), arr.end());

        int result = 0;
        int MOD = 1e9 + 7;
        for (int i = left - 1; i < right; i++)
        {
            result = (result + arr[i]) % MOD;
        }

        return result;
    }
};