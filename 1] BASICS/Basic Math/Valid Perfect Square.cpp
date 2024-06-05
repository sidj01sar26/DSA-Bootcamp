// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        // Iterate starting from 1 and keep checking until i * i exceeds num
        for (long long i = 1; i * i <= num; i++)
        {
            if (num == (i * i))
            {                
                // Check if the current i squared equals num
                return true; 
                // If it does, num is a perfect square
            }
        }
        return false; // If no i squared equals num, num is not a perfect square
    }
};