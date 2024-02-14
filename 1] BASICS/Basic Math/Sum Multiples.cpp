// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfMultiples(int n)
    {
        int sum = 0; // Initialize the sum variable to store the result

        // Loop through numbers from 1 to n
        for (int i = 1; i <= n; i++)
        {
            // Check if the current number is a multiple of 3, 5, or 7
            // If it is, add it to the sum
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) sum += i;
        }

        // Return the sum of multiples
        return sum;
    }
};
