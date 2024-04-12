// Leetcode

#include <bits/stdc++.h>
using namespace std;

class RLEIterator
{
public:
    vector<int> arr; // RLE encoding
    int index = 0;   // Current position

    RLEIterator(vector<int> &encoding) : arr(encoding) {}

    int next(int n)
    { // Get next element
        while (index < arr.size())
        {
            if (arr[index] >= n)
            { // If enough elements left
                arr[index] -= n;
                return arr[index + 1]; // Return next value
            }
            else
            {
                n -= arr[index]; // Decrease needed elements
                index += 2;      // Move to next pair
            }
        }
        return -1; // End of encoding or n exceeds remaining count
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(encoding);
 * int param_1 = obj->next(n);
 */