// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to recursively solve the problem
    // Parameters:
    //   n: The current number of candies
    //   k: The number of candies to be added in each step
    //   val: The initial number of candies to be added in each step
    int solve(int n, int k, int val)
    {
        // Base case: if the number of candies needed is already present or exceeded
        if (k >= n)
        {
            return 0; // Return 0 steps
        }
        // If the current number of candies is divisible by the current number of candies to add (k)
        if (n % k == 0)
        {
            // Return 2 plus the result of recursively solving for a doubled increment
            return 2 + solve(n, k + k, k);
        }
        // Otherwise, increment the number of candies added and recursively solve
        return 1 + solve(n, k + val, val);
    }

    // Function to find the minimum steps to reach 'n' candies
    // Parameters:
    //   n: The target number of candies
    int minSteps(int n)
    {
        // Call the solve function with initial parameters and return its result
        return solve(n, 1, 1);
    }
};
