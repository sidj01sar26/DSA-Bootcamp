// Leetcode

#include <bits/stdc++.h>
using namespace std;

int dominantIndex(vector<int> &nums)
{
    // Initialize the index of the maximum element to the first element
    int maxIndex = 0;

    // Finding the index of the largest element
    for (int i = 1; i < nums.size(); i++)
    {
        // If the current element is greater than the element at maxIndex, update maxIndex
        if (nums[i] > nums[maxIndex])
        {
            maxIndex = i;
        }
    }

    // Checking if the largest element is at least twice as much as every other number
    for (int i = 0; i < nums.size(); i++)
    {
        // If i is not the index of the largest element and the largest element is not at least twice as much as nums[i],
        // return -1 indicating there is no dominant index
        if (i != maxIndex && nums[maxIndex] < 2 * nums[i])
        {
            return -1;
        }
    }

    // Return the index of the largest element, which is the dominant index
    return maxIndex;
}
