// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(int n)
    {
        // The target value that all elements should be equal to
        int target = n;

        // Calculate the number of operations needed
        // Each operation reduces the difference between each element and the target value by 1
        // Since the initial array is [1, 3, 5, ..., n], the sum of differences can be simplified to n * n / 4
        return n * n / 4;
    }
};
