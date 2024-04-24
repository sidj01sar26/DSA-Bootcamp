// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxPower(string s)
    {
        // Initialize variables to store maximum power and current power
        int maxPower = 1;
        int currentPower = 1;

        // Iterate through the string starting from the second character
        for (int i = 1; i < s.length(); i++)
        {
            // Check if the current character is the same as the previous one
            if (s[i] == s[i - 1])
            {
                // If yes, increment the current power and update the maximum power if needed
                currentPower++;
                maxPower = max(maxPower, currentPower);
            }
            else
            {
                // If not, reset the current power to 1 (start a new substring)
                currentPower = 1;
            }
        }

        // Return the maximum power of the string
        return maxPower;
    }
};