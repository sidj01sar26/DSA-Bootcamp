// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        // Create a map to store counts of 0s and 1s encountered so far
        unordered_map<int, int> countMap;
        // Initialize the count map with count 0 at index -1
        countMap[0] = -1;
        // Initialize maxlen to store the maximum length of subarray
        int maxlen = 0;
        // Initialize count to keep track of the difference between counts of 0s and 1s
        int count = 0;

        // Loop through the input array
        for (int i = 0; i < nums.size(); i++)
        {
            // Increment or decrement count based on the value at current index
            count += (nums[i] == 0) ? -1 : 1;
            // If the current count is already in the map, update maxlen
            // by finding the difference between current index and the index stored in the map
            if (countMap.find(count) != countMap.end())
            {
                maxlen = max(maxlen, i - countMap[count]);
            }
            else
            {
                // If the count is not in the map, add it to the map with current index
                countMap[count] = i;
            }
        }
        // Return the maximum length of subarray with equal number of 0s and 1s
        return maxlen;
    }
};