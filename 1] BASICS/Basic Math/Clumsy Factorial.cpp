// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int clumsy(int N)
    {
        // Base cases for N = 1 and N = 2
        if (N <= 2)
            return N;

        // Base cases for N = 3 and N = 4
        if (N <= 4)
            return N + 3;

        // If N is a multiple of 4, we subtract 1 from N
        if (N % 4 == 0)
            return N + 1;

        // If N modulo 4 is 1 or 2, we add 2 to N
        if (N % 4 <= 2)
            return N + 2;

        // If N modulo 4 is 3, we subtract 1 from N
        return N - 1;
    }
};
