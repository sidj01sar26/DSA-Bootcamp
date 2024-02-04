// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        // Merge the two sorted arrays into a single array
        vector<int> merged;
        int i = 0, j = 0;

        // Merge step: comparing elements from both arrays and adding them to merged array in sorted order
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                merged.push_back(nums1[i++]);
            }
            else
            {
                merged.push_back(nums2[j++]);
            }
        }

        // Add remaining elements from nums1
        while (i < nums1.size()) merged.push_back(nums1[i++]);

        // Add remaining elements from nums2
        while (j < nums2.size()) merged.push_back(nums2[j++]);

        // Calculate the index of the median element
        int mid = merged.size() / 2;

        // Determine median based on merged array size
        if (merged.size() % 2 == 0)
        {
            // If the merged array has even length, return the average of two middle elements
            return (merged[mid - 1] + merged[mid]) / 2.0;
        }
        else
        {
            // If the merged array has odd length, return the middle element
            return merged[mid];
        }
    }
};
