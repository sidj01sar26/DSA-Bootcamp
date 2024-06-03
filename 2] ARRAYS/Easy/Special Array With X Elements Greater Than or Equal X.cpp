// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int specialArray(vector<int> &arr)
    {
        vector<int> count(1001, 0);
        // Create a count array with size 1001 initialized to 0

        for (int num : arr)
        {
            // Iterate through each number in the input array
            count[num]++;
            // Increment the count for the number
        }

        int total = arr.size(); // Get the total number of elements in the input array

        for (int i = 0; i <= 1000; i++)
        {
            // Iterate from 0 to 1000
            if (i == total) return i;
            // If i is equal to the remaining total, return i as the special value
            total -= count[i];
            // Subtract the count of the current number from the total
        }

        return -1; // If no special value is found, return -1
    }
};