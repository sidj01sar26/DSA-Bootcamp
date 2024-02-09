// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int xorBeauty(vector<int> &nums)
    {
        // Initialize the result variable to store the XOR of all elements
        int ans = 0;

        // Loop through each element in the vector nums
        for (int i = 0; i < nums.size(); i++)
        {
            // Perform bitwise XOR operation between the current element and ans
            ans ^= nums[i];
        }

        // Return the final XOR result
        return ans;
    }
};
