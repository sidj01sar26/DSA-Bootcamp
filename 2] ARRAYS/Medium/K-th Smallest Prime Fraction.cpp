// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
    {
        int n = arr.size();         // Get the size of the array
        double left = 0, right = 1; // Initialize the binary search range

        // Perform binary search on the fraction values
        while (left < right)
        {
            double mid = (left + right) / 2; 
            // Calculate the midpoint of the current range
            int count = 0;                   
            // Counter to track the number of fractions <= mid
            int p = 0, q = 1;                
            // Variables to store the current smallest fraction
            int j = 0;                       
            // Pointer for the inner loop

            // Iterate through the array to count fractions <= mid
            for (int i = 0; i < n; i++)
            {
                // Find the first index j such that arr[i] <= mid * arr[j]
                while (j < n && arr[i] > mid * arr[j])
                {
                    j++;
                }
                // Update the count of fractions <= mid
                count += n - j;

                // Update the smallest fraction p/q
                if (j < n && p * arr[j] < q * arr[i])
                {
                    p = arr[i];
                    q = arr[j];
                }
            }

            // If count equals k, return the current smallest fraction
            if (count == k)
            {
                return {p, q};
            }
            // Adjust the binary search range
            if (count < k)
            {
                left = mid;
            }
            else
            {
                right = mid;
            }
        }

        throw; // If no fraction is found (this should not happen), throw an exception
    }
};