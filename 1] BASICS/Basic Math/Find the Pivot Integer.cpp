// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the pivot integer
    int pivotInteger(int n)
    {
        // Calculate the sum of integers from 1 to n using the formula (n * (n + 1)) / 2
        int sum = n * (n + 1) / 2;
        // Find the square root of the sum
        int squareRoot = sqrt(sum);
        // Check if the square of the square root equals the sum
        if (squareRoot * squareRoot == sum)
        {
            // If true, return the square root as it is the pivot integer
            return squareRoot;
        }
        else
        {
            // If false, return -1 indicating no pivot integer exists
            return -1;
        }
    }
};