// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int sum = 0; // Initialize the sum of poisoned duration
        for (int i = 0; i < timeSeries.size() - 1; i++)
        {
            // Calculate the duration of poisoning for each attack
            // by taking the minimum of the given duration and the time difference
            // between consecutive attacks
            sum += min(duration, timeSeries[i + 1] - timeSeries[i]);
        }
        // Add the duration of the last attack, as it is not accounted for in the loop
        return sum + duration;
    }
};
