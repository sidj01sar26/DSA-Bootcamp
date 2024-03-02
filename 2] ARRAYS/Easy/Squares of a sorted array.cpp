// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &a)
    {
        int n = a.size(); // Get the size of the vector

        // Square each element of the vector
        for (int i = 0; i < n; i++)
        {
            a[i] *= a[i]; // Square the element at index i
        }

        sort(a.begin(), a.end()); // Sort the vector

        return a; // Return the sorted vector
    }
};
