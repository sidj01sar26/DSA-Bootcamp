// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxAbsValExpr(vector<int> &arr1, vector<int> &arr2)
    {
        int n = arr1.size();
        // Initialize variables to store maximum and minimum values for each expression
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, max4 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX, min4 = INT_MAX;

        // Loop through each element of the arrays
        for (int i = 0; i < n; i++)
        {
            // Calculate four different expressions
            int temp1 = arr1[i] + arr2[i] + i;
            int temp2 = arr1[i] + arr2[i] - i;
            int temp3 = arr1[i] - arr2[i] + i;
            int temp4 = arr1[i] - arr2[i] - i;

            // Update maximum and minimum values for each expression
            max1 = max(max1, temp1);
            min1 = min(min1, temp1);
            max2 = max(max2, temp2);
            min2 = min(min2, temp2);
            max3 = max(max3, temp3);
            min3 = min(min3, temp3);
            max4 = max(max4, temp4);
            min4 = min(min4, temp4);
        }

        // Calculate differences between maximum and minimum values for each expression
        int diff1 = max1 - min1;
        int diff2 = max2 - min2;
        int diff3 = max3 - min3;
        int diff4 = max4 - min4;

        // Return the maximum difference among all expressions
        return max(max(diff1, diff2), max(diff3, diff4));
    }
};