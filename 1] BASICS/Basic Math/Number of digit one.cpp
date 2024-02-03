// Leetcode - Hard

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countDigitOne(int n)
    {
        int ones = 0; // Initialize the count of digit '1' occurrences
        for (long long divisor = 1; divisor <= n; divisor *= 10)
        {
            // Calculate the count of digits greater than the current divisor
            int quotient = n / divisor;

            // Calculate the count of digits smaller than the current divisor
            int remainder = n % divisor;

            // Count the occurrences of '1' in higher digits
            // The formula ((quotient + 8) / 10) calculates the number of times '1' occurs
            // in the higher digits (excluding the current digit) and multiplies it by divisor
            ones += (quotient + 8) / 10 * divisor;

            // If the current digit is '1', count the occurrences of '1' in the current digit
            // The formula (quotient % 10 == 1) checks if the current digit is '1'
            if (quotient % 10 == 1)
            {
                // Count the occurrences of '1' in the current digit
                // Add the count of digits smaller than the current divisor plus one
                ones += remainder + 1;
            }
        }

        // Return the total count of digit '1' occurrences
        return ones;
    }
};
