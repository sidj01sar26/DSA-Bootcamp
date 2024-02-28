// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        // Initialize a vector to store the decoded array
        vector<int> result;

        // Add the first element of the decoded array
        result.push_back(first);

        // Loop through the encoded array
        for (int i = 0; i < encoded.size(); i++)
        {
            // XOR operation between the previous decoded element and the corresponding encoded element
            // This retrieves the next element of the decoded array
            int decoded = result[i] ^ encoded[i];

            // Add the decoded element to the result vector
            result.push_back(decoded);
        }

        // Return the decoded array
        return result;
    }
};