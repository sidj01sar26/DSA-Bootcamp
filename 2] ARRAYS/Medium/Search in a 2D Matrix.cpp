// Leetcode

// Companies - Amazon Netflix Samsung Walmart Oracle Tekion-corp Google Facebook 
//             Microsoft CRED Meesho Swiggy Dream11 InMobi

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0;
        int col = cols - 1;

        while (row < rows && col > -1)
        {
            int current = matrix[row][col];

            if (current == target)
            {
                return true;
            }

            if (target > current)
            {
                row++;
            }

            else
            {
                col--;
            }
        }

        return false;
    }
};