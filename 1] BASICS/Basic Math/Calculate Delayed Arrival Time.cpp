// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime)
    {
        // Add the arrival time and delayed time, and calculate the modulo 24
        // This ensures that the result stays within the range of 0 to 23, representing hours in a day
        return (arrivalTime + delayedTime) % 24;
    }
};
