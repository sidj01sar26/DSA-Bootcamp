// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double nthPersonGetsNthSeat(int n)
    {
        // If there's only one person, they will definitely get their own seat.
        if (n == 1)
        {
            return 1.0;
        }
        // If there are more than one person, there's a 50% chance that the nth person gets their own seat.
        else
        {
            return 0.5;
        }
    }
};
