// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        // XOR operation to find the result of the sum of all elements in nums
        for (int i = 0; i < nums.size(); i++)
        {
            k ^= nums[i];
        }

        int ans = 0;

        // Count the number of set bits in the binary representation of k
        for (; k > 0; k >>= 1)
        {
            ans += (k & 1); // If the least significant bit of k is set, increment ans
        }
        return ans; // Return the count of set bits, representing the minimum operations required
    }
};
