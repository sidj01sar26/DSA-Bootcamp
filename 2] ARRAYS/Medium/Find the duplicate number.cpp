// Leetcode

// Companies - Amazon Adobe Samsung Netflix Walmart Bloomberg CRED Meesho Swiggy
//             Dream11 InMobi Oyo PayTM Byju's

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        while (nums[0] != nums[nums[0]])
        {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};

// or

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }
        return -1;
    }
};