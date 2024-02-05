// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        // Loop through each element in the array
        for (int i = 0; i < arr.size(); i++)
        {
            // Nested loop to compare each element with all elements after it
            for (int j = i + 1; j < arr.size(); j++)
            {
                // Check if the current element is twice the value of the other
                // or if the other element is twice the value of the current one
                if (arr[i] * 2 == arr[j] || arr[j] * 2 == arr[i])
                {
                    // If such a pair is found, return true
                    return true;
                }
            }
        }
        // If no such pair is found, return false
        return false;
    }
};