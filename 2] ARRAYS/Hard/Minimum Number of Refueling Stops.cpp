// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
    {
        // Get the number of stations
        int n = stations.size();
        // Initialize current fuel with startFuel
        int currFuel = startFuel;
        // Initialize the number of stops
        int stops = 0;
        // Create a max heap to store the available fuel at each station
        priority_queue<int> pq;
        // Initialize the index to iterate over stations vector
        int i = 0;
        // Loop until we reach the target
        while (currFuel < target)
        {
            // Add available fuel from stations that are reachable from current fuel
            while (i < n && stations[i][0] <= currFuel)
            {
                pq.push(stations[i][1]);
                i++;
            }
            // If there is no reachable station to refuel, return -1
            if (pq.empty())
            {
                return -1;
            }
            // Refuel from the station with the maximum available fuel
            currFuel += pq.top();
            pq.pop();
            // Increment the number of stops
            stops++;
        }
        // Return the total number of stops required to reach the target
        return stops;
    }
};