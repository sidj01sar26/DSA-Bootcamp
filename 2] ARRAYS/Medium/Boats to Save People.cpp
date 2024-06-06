// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        sort(people.begin(), people.end()); // Sort the array to facilitate pairing

        int boatCount = 0;             // Initialize the boat count
        int left = 0;                  // Pointer to the lightest person
        int right = people.size() - 1; // Pointer to the heaviest person

        // Iterate while the left pointer is less than or equal to the right pointer
        while (left <= right)
        {
            // Check if the lightest and heaviest person can share a boat
            if (people[left] + people[right] <= limit)
            {
                left++; // Move the left pointer to the next lightest person
            }
            right--;     // Move the right pointer to the next heaviest person
            boatCount++; // Increment the boat count
        }

        return boatCount; // Return the total number of boats needed
    }
};