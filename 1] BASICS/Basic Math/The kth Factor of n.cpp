// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthFactor(int n, int k)
    {
        // Initialize a counter to keep track of the number of factors found.
        int count = 0;

        // Iterate through numbers from 1 to n to check for factors.
        for (int i = 1; i <= n; i++)
        {
            // Check if i is a factor of n (i.e., n is divisible by i).
            if (n % i == 0)
            {
                // Increment the counter for each factor found.
                count++;

                // Check if the current factor is the kth factor.
                if (count == k)
                {
                    // If it is the kth factor, return the current factor i.
                    return i;
                }
            }
        }

        // If the loop completes and we haven't found the kth factor, return -1.
        return -1;
    }
};
