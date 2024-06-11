// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Merge function to merge two sorted halves of the array
    void merge(vector<int> &v, vector<int> &temp, int start, int mid, int end)
    {
        int i = start, j = mid + 1, k = start; 
        // Initialize pointers for both halves and the temp array

        // Merge the two halves into the temp array
        while (i <= mid && j <= end)
        {
            if (v[i] <= v[j])
            {
                temp[k++] = v[i++]; // If element in the left half is smaller, add it to temp
            }
            else
            {
                temp[k++] = v[j++]; // If element in the right half is smaller, add it to temp
            }
        }

        // Copy any remaining elements from the left half
        while (i <= mid)
        {
            temp[k++] = v[i++];
        }

        // Copy any remaining elements from the right half
        while (j <= end)
        {
            temp[k++] = v[j++];
        }

        // Copy the sorted elements back to the original array
        while (start <= end)
        {
            v[start] = temp[start];
            start++;
        }
    }

    // Merge sort function to recursively sort the array
    void mergeSort(vector<int> &v, vector<int> &temp, int start, int end)
    {
        if (start >= end) return; 
        // Base case: if the array has one or no elements, it's already sorted

        int mid = (start + end) >> 1; 
        // Find the middle point to divide the array into two halves

        // Recursively sort both halves
        mergeSort(v, temp, start, mid);
        mergeSort(v, temp, mid + 1, end);

        // Merge the sorted halves
        merge(v, temp, start, mid, end);
    }

    // Function to sort the array using merge sort
    vector<int> sortArray(vector<int> &nums)
    {
        vector<int> temp(nums.size(), 0);          
        // Create a temporary array to help with merging
        mergeSort(nums, temp, 0, nums.size() - 1); 
        // Start the merge sort
        return nums;                               
        // Return the sorted array
    }
};