// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &time)
    {
        vector<int> rem(60); // Array to store remainders of elements when divided by 60
        int count = 0;       // Variable to count pairs

        // Loop through each element in the time array
        for (int t : time)
        {
            // If the element is divisible by 60, then add the count of elements which were previously divisible by 60
            if (t % 60 == 0)
            {
                count += rem[0];
            }

            else
            {
                // If the element is not divisible by 60, add the count of elements with a remainder that would make the sum divisible by 60
                count += rem[60 - t % 60];
            }

            // Update the remainder count array with the current element's remainder
            rem[t % 60]++;
        }
        
        return count; // Return the count of pairs
    }
};