// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &changed)
    {
        int n = changed.size(); 
        // Get the size of the input vector
        if (n % 2 == 1) return {};                        
        // If the size is odd, return an empty vector
        sort(changed.begin(), changed.end()); 
        // Sort the vector in ascending order
        vector<int> ans;                      
        // Create a vector to store the original array
        map<int, int> mp;                     
        // Create a map to store the frequency of each number
        for (int num : changed)
        {
            mp[num]++; // Count the frequency of each number in the changed vector
        }
        for (int num : changed)
        {
            if (mp[num] == 0) continue; 
            // If the current number has been used, skip it
            if (mp[num * 2] == 0) return {};      
            // If the double of the current number doesn't exist, return an empty vector
            ans.push_back(num); // Add the current number to the original array
            mp[num]--;          // Decrease the frequency of the current number
            mp[num * 2]--;      // Decrease the frequency of its double
        }
        return ans; // Return the original array
    }
};