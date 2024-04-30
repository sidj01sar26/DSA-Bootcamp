// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        // Iterate through each row in the image
        for (auto &row : image)
        {
            // Reverse the current row
            reverse(row.begin(), row.end());
            // Iterate through each pixel in the current row
            for (auto &pixel : row)
            {
                // Invert the pixel (0 becomes 1, and 1 becomes 0) using bitwise XOR
                pixel ^= 1;
            }
        }
        return image; // Return the modified image
    }
};