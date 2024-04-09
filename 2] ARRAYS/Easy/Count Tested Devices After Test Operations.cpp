// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count the number of devices tested based on their battery percentages
    int countTestedDevices(vector<int> &batteryPercentages)
    {
        int n = batteryPercentages.size();
        int count = 0;

        // Iterate through each device's battery percentage
        for (int i = 0; i < n; i++)
        {
            if (batteryPercentages[i] > 0)
            {
                count++; 
                // Increment the count of tested devices
                
                // Decrease the battery percentages of devices following the current one
                for (int j = i + 1; j < n; j++)
                    batteryPercentages[j] = max(0, batteryPercentages[j] - 1);
            }
        }

        return count; // Return the count of tested devices
    }
};
