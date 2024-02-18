// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int tribonacci(int n)
    {
        // Initialize the first three terms of the sequence
        int first = 0, second = 1, third = 1, current;

        // Base cases: if n is 0, return the first term
        if (n == 0)
        {
            return first;
        }
        // Base cases: if n is 1 or 2, return the second or third term respectively
        if (n == 1 || n == 2)
        {
            return 1;
        }

        // Iterate from the 4th term up to the nth term
        for (int i = 3; i <= n; i++)
        {
            // Calculate the next term in the sequence
            current = first + second + third;
            // Update the value of the first term
            first = second;
            // Update the value of the second term
            second = third;
            // Update the value of the third term
            third = current;
        }

        // Return the nth term
        return current;
    }
};
