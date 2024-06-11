// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool xorGame(vector<int> &nums)
    {
        int xorSum = 0; // Initialize the variable to store the XOR of all elements

        // Calculate the XOR of all elements in the array
        for (int i = 0; i < nums.size(); i++)
        {
            xorSum ^= nums[i];
        }

        // If the XOR sum is 0, or the number of elements is even, return true
        return xorSum == 0 || nums.size() % 2 == 0;
    }
};
