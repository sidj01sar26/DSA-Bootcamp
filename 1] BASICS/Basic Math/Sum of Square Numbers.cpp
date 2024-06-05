// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long i = 0, j = sqrt(c); 
        // Initialize two pointers: i starts from 0 and j starts from the square root of c

        while (i <= j)
        {                                  
            // Loop while i is less than or equal to j
            long long sum = i * i + j * j; 
            // Calculate the sum of squares of i and j
            if (sum == c)
            { 
                // If the sum is equal to c, return true
                return true;
            }
            else if (sum > c)
            { 
                // If the sum is greater than c, decrement j
                j--;
            }
            else
            { 
                // If the sum is less than c, increment i
                i++;
            }
        }

        return false; // Return false if no such pair (i, j) is found
    }
};