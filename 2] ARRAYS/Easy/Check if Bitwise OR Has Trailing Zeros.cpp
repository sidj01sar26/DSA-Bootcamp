// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if there are at least two even numbers in the vector
    bool hasTrailingZeros(vector<int> &nums)
    {
        int even = 0; // Counter to keep track of even numbers
        // Loop through the vector
        for (int i = 0; i < nums.size(); i++)
        {
            // Check if the current number is even
            if (nums[i] % 2 == 0)
            {
                even++; // Increment the counter if the number is even
            }
        }
        // Check if the count of even numbers is greater than or equal to 2
        return even >= 2;
    }
};