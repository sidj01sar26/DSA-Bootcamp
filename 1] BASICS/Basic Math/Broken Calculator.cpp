// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to calculate the minimum number of operations to transform startValue to target
    // Parameters:
    //   startValue: The initial value
    //   target: The target value
    int brokenCalc(int startValue, int target)
    {
        int result = 0; // Initialize the result to track the number of operations

        // Continue the loop until the startValue reaches or exceeds the target
        while (startValue < target)
        {
            // If the target is even, divide it by 2
            if (target % 2 == 0)
            {
                target /= 2;
            }
            else
            { 
                // If the target is odd, increment it by 1
                target++;
            }

            result++; // Increment the number of operations
        }

        // Finally, return the total number of operations needed
        // This is achieved by adding the number of operations to reach the target
        // with the difference between the startValue and the target
        return result + startValue - target;
    }
};
