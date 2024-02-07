// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countOdds(int low, int high)
    {
        // Calculate the difference between high and low, then divide by 2
        // This gives the number of intervals between low and high, each of which contains one odd number.
        // Adding 1 to include the low number itself if it's odd.
        return (high - low) / 2 + (high % 2 || low % 2);
    }
};
