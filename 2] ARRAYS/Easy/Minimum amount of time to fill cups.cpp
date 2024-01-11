// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fillCups(vector<int> &amount)
    {
        sort(amount.begin(), amount.end());
        int ans = 0;
        while (amount[1] > 0)
        {
            amount[1]--;
            amount[2]--;
            sort(amount.begin(), amount.end());
            ans++;
        }
        ans += (amount[0] + amount[1] + amount[2]);
        return ans;
    }
};
