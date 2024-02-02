// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices)
    {
        // Check if it's possible to make burgers with given tomato and cheese slices
        if (tomatoSlices < 2 * cheeseSlices ||
            // If tomato slices are less than twice the cheese slices
            4 * cheeseSlices < tomatoSlices ||
            // Or if four times the cheese slices are less than tomato slices
            (tomatoSlices - 2 * cheeseSlices) % 2 != 0 ||
            // Or if the difference of tomato slices and twice the cheese slices is odd
            (4 * cheeseSlices - tomatoSlices) % 2 != 0)
        // Or if the difference of four times the cheese slices and tomato slices is odd
        
        {
            return {};
            // If any of these conditions are met, return an empty vector
        }

        // Calculate number of jumbo and small burgers
        int jumboBurgers = (tomatoSlices - 2 * cheeseSlices) / 2;
        // Calculate number of jumbo burgers
        int smallBurgers = (4 * cheeseSlices - tomatoSlices) / 2;
        // Calculate number of small burgers

        return {jumboBurgers, smallBurgers};
        // Return the numbers of jumbo and small burgers as a vector
    }
};
