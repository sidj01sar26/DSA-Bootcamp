// Leetcode

#include <vector>
using namespace std;

class SubrectangleQueries
{
public:
    vector<vector<int>> rect; // The rectangular matrix

    // Constructor to initialize the rectangle
    SubrectangleQueries(vector<vector<int>> &rectangle)
    {
        rect = rectangle; // Copy the input rectangle to the class member
    }

    // Update all values within the specified subrectangle
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        // Loop through the subrectangle
        for (int i = row1; i <= row2; i++)
        {
            for (int j = col1; j <= col2; j++)
            {
                rect[i][j] = newValue; // Set each value to newValue
            }
        }
    }

    // Get the value at the specified row and column
    int getValue(int row, int col)
    {
        return rect[row][col]; // Return the value at the specified position
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
