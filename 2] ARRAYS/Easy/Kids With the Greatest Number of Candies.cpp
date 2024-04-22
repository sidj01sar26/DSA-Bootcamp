// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find out if each kid can have the maximum number of candies
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        // Finding the maximum number of candies among all kids
        int max_candies = *max_element(candies.begin(), candies.end());

        // Vector to store the result indicating if each kid can have the maximum candies
        vector<bool> result;

        // Iterating through the candies of each kid
        for (int i = 0; i < candies.size(); i++)
        {
            // Checking if adding extra candies to current kid's candies makes it equal or greater than max_candies
            result.push_back(candies[i] + extraCandies >= max_candies);
        }

        // Returning the result vector
        return result;
    }
};