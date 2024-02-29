// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> answerQueries(vector<int> &arr, vector<int> &query)
    {
        // Sorting the array to optimize summing process
        sort(arr.begin(), arr.end());
        // Result vector to store counts for each query
        vector<int> result;

        // Loop through each query
        for (int i = 0; i < query.size(); i++)
        {
            int sum = 0, count = 0;
            // Loop through sorted array elements
            for (int j = 0; j < arr.size(); j++)
            {
                sum += arr[j]; // Incremental sum of elements
                if (sum <= query[i])
                {            // Check if current sum satisfies query
                    count++; // Increment count if satisfied
                }
                else
                {
                    break; // If sum exceeds query, no need to continue
                }
            }
            result.push_back(count); // Store count for current query
        }

        return result; // Return vector containing counts for all queries
    }
};
