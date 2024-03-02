// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countDigits(int num)
    {
        // Initialize a variable to store the count of digits that divide 'num'
        int ans = 0;

        // Create a copy of 'num' to iterate through its digits
        int n = num;

        // Iterate through each digit of 'num'
        while (n > 0)
        {
            // Extract the last digit of 'n'
            int digit = n % 10;

            // Check if 'num' is divisible by the extracted digit
            if (num % digit == 0)
            {
                // If divisible, increment the count
                ans++;
            }

            // Move to the next digit by dividing 'n' by 10
            n = n / 10;
        }

        // Return the final count of digits that divide 'num'
        return ans;
    }
};
