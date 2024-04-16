// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Find the kth smallest element in a sorted matrix
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        // Max heap to store the k smallest elements encountered so far
        priority_queue<int> pq;
        int n = matrix.size();

        // Iterate through the matrix and add elements to the max heap
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                pq.push(matrix[i][j]);
                // Keep the heap size equal to k
                if (pq.size() > k)
                {
                    pq.pop();
                }
            }

        // Return the top element of the heap, which is the kth smallest element
        return pq.top();
    }
};