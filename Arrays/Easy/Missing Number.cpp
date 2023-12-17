// Leetcode

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans1 = 0;
        int ans2 = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            ans1 ^= i;
            ans2 ^= nums[i];
        }
        return (ans1 ^ n) ^ ans2;
    }
};
