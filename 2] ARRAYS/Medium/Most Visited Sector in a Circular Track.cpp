// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> mostVisited(int n, vector<int> &rounds)
    {
        vector<int> ans;         
        // Initialize the answer vector to store the most visited sectors
        int start = rounds[0];   
        // Get the start sector
        int end = rounds.back(); 
        // Get the end sector

        // If the start sector is less than or equal to the end sector
        if (start <= end)
        {
            // Add all sectors from start to end to the answer vector
            for (int i = start; i <= end; i++)
            {
                ans.push_back(i);
            }
        }
        // If the start sector is greater than the end sector (indicating wrap around)
        else
        {
            // Add all sectors from 1 to end
            for (int i = 1; i <= end; i++)
            {
                ans.push_back(i);
            }
            // Add all sectors from start to n
            for (int i = start; i <= n; i++)
            {
                ans.push_back(i);
            }
        }

        return ans; // Return the vector of most visited sectors
    }
};