// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < n; ++i)
        {
            ans[i] = ans[i + n] = nums[i];
        }
        return ans;
    }
};

// or

vector<int> concatenateArrays(const vector<int> &nums)
{
    vector<int> ans(nums);
    ans.insert(ans.end(), nums.begin(), nums.end());
    return ans;
}
