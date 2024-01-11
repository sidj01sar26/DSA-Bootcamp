// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> numberOfPairs(vector<int> &nums)
    {
        vector<int> ans(2);
        vector<int> temp(101);

        for (int i = 0; i < nums.size(); i++)
        {
            temp[nums[i]]++;
        }

        for (int i = 0; i < 101; i++)
        {
            if (temp[i] % 2 != 0)
            {
                ans[1]++;
            }
            ans[0] += temp[i] / 2;
        }

        return ans;
    }
};
