// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumCost(vector<int> &nums)
    {
        int n = nums.size();
        int ans = INT_MAX;
        for (int i = 0; i < n - 2; i++)
        {
            int sum = nums[0];
            for (int j = i + 1; j < n - 1; j++)
            {
                sum += nums[j];
                for (int k = j + 1; k < n; k++)
                {
                    ans = min(ans, sum + nums[k]);
                }
                sum -= nums[j];
            }
        }
        return ans;
    }
};