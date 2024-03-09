// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find a common element in two sorted vectors
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        // Initialize two pointers for each vector
        int i = 0, j = 0;

        // Iterate through both vectors until one of them ends
        while (i < nums1.size() && j < nums2.size())
        {
            // If the current elements in both vectors are equal, return that element
            if (nums1[i] == nums2[j])
            {
                return nums1[i];
            }
            // If the element in nums1 is greater than the element in nums2,
            // move the pointer in nums2 to the next element
            if (nums1[i] > nums2[j])
            {
                j++;
            }
            // If the element in nums1 is less than the element in nums2,
            // move the pointer in nums1 to the next element
            else
            {
                i++;
            }
        }
        // If no common element is found, return -1
        return -1;
    }
};
