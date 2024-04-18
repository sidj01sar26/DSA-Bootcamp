// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countBadPairs(vector<int> &arr)
    {
        // Create a frequency map to store the occurrences of differences between indices and values
        unordered_map<int, int> freq;
        // Initialize the answer variable and the size of the array
        long long ans = 0, n = arr.size();

        // Iterate through the array
        for (int i = 0; i < n; i++)
        {
            // Calculate the difference between the index and the value
            arr[i] = i - arr[i];
            // Increment the frequency of this difference
            freq[arr[i]]++;
        }

        // Iterate through the array again
        for (int i = 0; i < n; i++)
        {
            // Decrement the frequency of the current difference
            freq[arr[i]]--;
            // Add to the answer the count of "bad pairs", where a bad pair is formed by an element arr[i] and all elements arr[j] such that j > i and arr[j] > arr[i]
            ans += (n - i - 1 - freq[arr[i]]);
        }

        // Return the total count of bad pairs
        return ans;
    }
};