// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;

        // Sort the array to use next_permutation
        sort(nums.begin(), nums.end());

        do
        {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return result;
    }
};