// Leetcode - Medium

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trailingZeroes(int n)
    {
        // Initialize a variable to count the trailing zeroes
        int count = 0;

        while (n) // Continue the loop until n becomes zero
        {
            // Divide n by 5 in each iteration to count the number of factors of 5
            n /= 5;

            count += n;
            // Add the count of factors of 5 to the total count of trailing zeroes
        }

        return count; // Return the total count of trailing zeroes
    }
};
