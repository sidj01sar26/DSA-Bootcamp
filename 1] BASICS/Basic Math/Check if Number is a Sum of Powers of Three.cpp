// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        // Keep dividing n by powers of 3 until it becomes 0.
        while (n)
        {
            // If the remainder is 2, the number cannot be expressed as a sum of powers of 3.
            if (n % 3 == 2)
            {
                return false;
            }
            // Divide n by 3 to move to the next power of 3.
            n /= 3;
        }
        // If the loop completes, the number can be expressed as a sum of powers of 3.
        return true;
    }
};
