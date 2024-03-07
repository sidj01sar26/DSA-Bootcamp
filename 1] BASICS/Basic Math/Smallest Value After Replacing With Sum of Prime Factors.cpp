// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to calculate the sum of factors of a number
    long long getSumOfFactors(int n)
    {
        int divisor = 2;   // Start with the smallest divisor
        long long ans = 0; // Initialize sum of factors
        while (n > 1)
        {
            // Continue until n is reduced to 1
            if (n % divisor == 0)
            {
                // If divisor divides n without remainder
                ans += divisor;
                // Add divisor to the sum of factors
                n = n / divisor;
                // Update n by dividing it by the divisor
            }
            else
            {
                divisor++;
                // Move to the next divisor if current divisor doesn't divide n
            }
        }
        return ans; // Return the sum of factors
    }

    // Function to find the smallest value based on the sum of its factors
    int smallestValue(int n)
    {
        while (true)
        {
            // Loop indefinitely until a return statement is encountered
            long long sumOfFactors = getSumOfFactors(n);
            // Calculate sum of factors for current n
            if (n == sumOfFactors)
                // If n equals its sum of factors
                break;
            // Exit the loop
            n = sumOfFactors;
            // Update n with the sum of its factors
        }
        return n; // Return the smallest value based on the sum of its factors
    }
};
