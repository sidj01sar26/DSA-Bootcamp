// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getNoZeroIntegers(int n)
    {
        int a = 1, b = n - 1; // Initialize a to 1 and b to n - 1

        // Continue adjusting a and b until both do not contain the digit '0'
        while (hasZeroDigit(a) || hasZeroDigit(b))
        {
            a++; // Increment a
            b--; // Decrement b
        }

        return {a, b}; // Return the pair of integers a and b
    }

    bool hasZeroDigit(int num)
    {
        // Check if the number contains the digit '0'
        while (num > 0)
        {
            if (num % 10 == 0) return true; 
            // If the last digit is '0', return true
            num /= 10; // Remove the last digit
        }
        return false; // Return false if no '0' digit is found
    }
};