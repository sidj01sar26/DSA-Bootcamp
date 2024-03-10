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
        // Loop until the value at index 0 equals the value at index nums[0]
        while (nums[0] != nums[nums[0]])
        {
            // Swap the value at index 0 with the value at index nums[0]
            swap(nums[0], nums[nums[0]]);
        }
        // Once the loop exits, return the duplicate value found at index 0
        return nums[0];
    }
};

// or

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // Sort the vector of integers
        sort(nums.begin(), nums.end());

        // Iterate through the sorted vector
        for (int i = 0; i < nums.size() - 1; i++)
        {
            // If two adjacent elements are the same, return the duplicate value
            if (nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }
        // Return -1 if no duplicates are found
        return -1;
    }
};