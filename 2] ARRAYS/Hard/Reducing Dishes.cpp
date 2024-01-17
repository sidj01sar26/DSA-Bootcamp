// Leetcode

#include <bits/stdc++.h>
using namespace std;

// Greedy

class Solution
{
public:
    int maxSatisfaction(vector<int> &satisfaction)
    {
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        int result = 0, presum = 0;
        for (int i = 0; i < satisfaction.size(); i++)
        {
            presum = max(0, presum + satisfaction[i]);
            result += presum;
        }
        return result;
    }
};
