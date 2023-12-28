// Leetcode

#include <vector>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    if (n <= 2)
    {
        return 0;
    }

    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int trappedWater = 0;

    while (left < right)
    {
        if (height[left] < height[right])
        {
            leftMax = max(leftMax, height[left]);
            trappedWater += max(0, leftMax - height[left]);
            left++;
        }
        else
        {
            rightMax = max(rightMax, height[right]);
            trappedWater += max(0, rightMax - height[right]);
            right--;
        }
    }

    return trappedWater;
}

