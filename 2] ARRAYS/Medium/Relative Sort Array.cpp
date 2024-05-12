// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        int j = 0; // Initialize the index to track elements in arr1
        for (int i = 0; i < arr2.size(); i++)
        {                          
            // Loop through elements in arr2
            int element = arr2[i]; 
            // Get the current element from arr2
            for (int k = j; k < arr1.size(); k++)
            { 
                // Loop through elements in arr1
                if (arr1[k] == element)
                {                           
                    // If the current element in arr1 matches the element in arr2
                    swap(arr1[j], arr1[k]); 
                    // Swap the elements in arr1 to maintain relative order
                    j++;                    
                    // Increment the index in arr1
                }
            }
        }
        if (j < arr1.size())
        {                                       
            // If there are remaining elements in arr1
            sort(arr1.begin() + j, arr1.end()); 
            // Sort the remaining elements
        }
        return arr1; // Return the sorted array
    }
};
