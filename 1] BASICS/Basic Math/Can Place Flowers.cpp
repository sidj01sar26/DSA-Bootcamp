// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if n flowers can be placed in the flowerbed
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        // If no flowers need to be placed, return true
        if (n == 0)
        {
            return true;
        }

        // Iterate through the flowerbed
        for (int i = 0; i < flowerbed.size(); i++)
        {
            // Check if the current position is empty and both adjacent positions are also empty
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
                (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
            {
                // Place a flower at the current position
                flowerbed[i] = 1;
                // Decrease the count of remaining flowers to be placed
                n--;
                // If all flowers have been placed, return true
                if (n == 0)
                {
                    return true;
                }
            }
        }

        // If all flowers cannot be placed, return false
        return false;
    }
};
