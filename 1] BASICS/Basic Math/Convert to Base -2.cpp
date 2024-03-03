// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string baseNeg2(int n)
    {
        if (n == 0)
        { // If the input is 0, return "0"
            return "0";
        }

        string out = ""; // Initialize an empty string to store the result

        while (n != 0)
        { 
            // Continue until n becomes 0
            if (n % 2 == 0)
            {                    // If n is divisible by 2
                out = "0" + out; // Append '0' to the front of the result
            }
            else
            {                    // If n is not divisible by 2
                out = "1" + out; // Append '1' to the front of the result
                n -= 1;          // Subtract 1 from n
            }
            n /= -2; // Divide n by -2
        }

        return out; // Return the resulting string
    }
};
