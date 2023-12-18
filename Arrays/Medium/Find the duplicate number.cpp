// Leetcode

// Companies - Amazon Adobe Samsung Netflix Walmart Bloomberg CRED Meesho Swiggy
//             Dream11 InMobi Oyo PayTM Byju's


#include <vector>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        while (nums[0] != nums[nums[0]])
        {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};