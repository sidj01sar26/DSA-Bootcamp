// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> prisonAfterNDays(vector<int> &res, int n)
    {
        vector<int> tmp(8);       // Temporary vector to store the next day's state
        vector<vector<int>> seen; // Vector of vectors to store seen states
        while (n--)
        { // Loop until reaching the target day
            for (int i = 1; i < 7; i++)
            {                                      
                // Iterate through the cells except the first and last
                tmp[i] = res[i - 1] == res[i + 1]; 
                // Determine the state of each cell based on its neighbors
            }
            if (seen.size() && seen.front() == tmp)
                return seen[n % seen.size()]; 
                // If the state is repeating, return the corresponding state
            else
                seen.push_back(tmp); // Store the current state if not repeating
            res = tmp;               // Update the current state
        }
        return res; // Return the final state
    }
};
