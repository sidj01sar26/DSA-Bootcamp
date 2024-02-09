// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getXORSum(vector<int> &arr1, vector<int> &arr2)
    {
        // Initialize variables to store XOR sums
        int xorSum1 = 0, xorSum2 = 0;

        // Calculate XOR sum for arr1
        for (int i = 0; i < arr1.size(); i++)
        {
            xorSum1 ^= arr1[i]; // XOR operation with each element of arr1
        }

        // Calculate XOR sum for arr2
        for (int i = 0; i < arr2.size(); i++)
        {
            xorSum2 ^= arr2[i]; // XOR operation with each element of arr2
        }

        // Return the bitwise AND of the two XOR sums
        return xorSum1 & xorSum2;
    }
};
