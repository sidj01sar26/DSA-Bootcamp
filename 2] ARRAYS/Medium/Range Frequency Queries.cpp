// Leetcode

#include <bits/stdc++.h>
using namespace std;

class RangeFreqQuery
{
public:
    unordered_map<int, vector<int>> mpp; // Map to store indices of elements

    // Constructor to initialize the map with indices of elements in the array
    RangeFreqQuery(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
            mpp[arr[i]].push_back(i); // Storing index of each element
    }

    // Function to query frequency of a value within a given range
    int query(int left, int right, int value)
    {
        // Find lower and upper bounds of 'value' within given range
        int l = lower_bound(mpp[value].begin(), mpp[value].end(), left) - mpp[value].begin();
        int r = upper_bound(mpp[value].begin(), mpp[value].end(), right) - mpp[value].begin();

        // Return frequency of 'value' within the range
        return r - l;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
