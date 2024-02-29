// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        // Initialize a vector to store the count of smaller numbers for each element
        vector<int> ans;

        // Loop through each element in the input vector
        for (int i = 0; i < nums.size(); i++)
        {
            // Initialize a counter to count smaller numbers
            int count = 0;

            // Loop through all elements again to compare with the current element
            for (int j = 0; j < nums.size(); j++)
            {
                // If the current element is greater than the compared element,
                // increment the count of smaller numbers
                if (nums[i] > nums[j])
                {
                    count++;
                }
            }

            // Push the count of smaller numbers for the current element into the result vector
            ans.push_back(count);
        }

        // Return the vector containing counts of smaller numbers for each element
        return ans;
    }
};
