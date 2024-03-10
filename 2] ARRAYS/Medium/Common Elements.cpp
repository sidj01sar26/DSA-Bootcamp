// GFG

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        vector<int> result;      // Vector to store common elements
        int i = 0, j = 0, k = 0; // Pointers for three arrays

        // Loop until any of the arrays is fully traversed
        while (i < n1 && j < n2 && k < n3)
        {
            // If all three elements are equal
            if (A[i] == B[j] && B[j] == C[k])
            {
                result.push_back(A[i]); 
                // Add to result
                int current = A[i];     
                // Store the current common element
                // Move pointers to next different element
                while (i < n1 && A[i] == current)
                {
                    i++;
                }
                while (j < n2 && B[j] == current)
                {
                    j++;
                }
                while (k < n3 && C[k] == current)
                {
                    k++;
                }
            }
            else
            { 
                // If not all elements are equal
                // Move pointer of the array with the smallest value
                if (A[i] <= B[j] && A[i] <= C[k])
                {
                    i++;
                }
                else if (B[j] <= A[i] && B[j] <= C[k])
                {
                    j++;
                }
                else if (C[k] <= A[i] && C[k] <= B[j])
                {
                    k++;
                }
            }
        }

        return result; // Return common elements
    }
};
