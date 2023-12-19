// Leetcode

// Companies - Amazon

#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> numSet;

        for (int i = 0; i < nums.size(); ++i)
        {
            int num = nums[i];
            if (numSet.find(num) != numSet.end())
            {
                return true;
            }
            numSet.insert(num);
        }
        return false;
    }
};
