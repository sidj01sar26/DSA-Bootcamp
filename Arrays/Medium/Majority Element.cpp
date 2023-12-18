// Leetcode

#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int number = nums.size();
        return nums[number / 2];
    }
};