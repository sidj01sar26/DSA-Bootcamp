// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getAverages(vector<int> &v, int k)
    {
        int n = v.size();
        // Create a vector to store the averages, initialized with -1
        vector<int> averages(n, -1);
        // Variable to store the sum of elements in the sliding window
        long long sum = 0;

        // Loop through the input vector
        for (int i = 0; i < n; i++)
        {
            // Add the current element to the sum
            sum += v[i];
            // If the window size is greater than or equal to 2k+1 (i.e., the window is complete)
            if (i >= 2 * k)
            {
                // Calculate the average of the current window and store it at the correct index
                averages[i - k] = sum / (2 * k + 1);
                // Remove the oldest element from the window by subtracting it from the sum
                sum -= v[i - 2 * k];
            }
        }

        // Return the vector of averages
        return averages;
    }
};