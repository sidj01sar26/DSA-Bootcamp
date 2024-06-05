// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minMoves(int target, int maxDoubles)
    {
        int cnt = 0; // Initialize the counter for the number of moves

        // Continue the loop while target is greater than 1 and there are remaining doubles
        while (target > 1 && maxDoubles > 0)
        {
            if (target % 2 == 0)
            {                 
                // If the target is even
                target /= 2;  
                // Halve the target
                maxDoubles--; 
                // Decrease the number of available doubles
            }
            else
            {             
                // If the target is odd
                target--; 
                // Decrease the target by 1
            }
            cnt++; // Increment the move counter
        }

        // If there are no more doubles left, add the remaining steps to reach 1
        return cnt + (target - 1);
    }
};