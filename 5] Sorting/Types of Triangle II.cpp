// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string triangleType(vector<int> &nums)
    {
        // Sort the sides of the triangle in ascending order
        sort(nums.begin(), nums.end());

        // Check if all sides are equal (equilateral triangle)
        if (nums[0] == nums[2])
        {
            return "equilateral";
        }
        // Check if the sum of the lengths of the two smaller sides is less than or equal to the length of the largest side (not a triangle)
        else if (nums[0] + nums[1] <= nums[2])
        {
            return "none";
        }
        // Check if all sides are different lengths (scalene triangle)
        else if (nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[2])
        {
            return "scalene";
        }
        // If none of the above conditions are met, it must be an isosceles triangle
        else
        {
            return "isosceles";
        }
    }
};
