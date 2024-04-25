// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        unordered_map<int, int> count{}; // Store the count of each fruit type
        int i{}, j{};                    // Initialize pointers for the sliding window

        // Loop through the fruits using a sliding window approach
        for (i = 0, j = 0; j < fruits.size(); j++)
        {
            count[fruits[j]]++; // Increment the count of the current fruit

            // If the number of different fruits exceeds 2, adjust the window
            if (count.size() > 2)
            {
                // Decrease the count of the fruit at the left pointer
                if (--count[fruits[i]] == 0)
                {
                    count.erase(fruits[i]); 
                    // If the count becomes 0, remove it from the map
                }
                i++; // Move the left pointer to the right
            }
        }
        // Return the maximum number of fruits in the basket
        return j - i;
    }
};