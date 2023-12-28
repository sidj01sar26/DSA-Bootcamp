#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n - 1; ++i)
        {
            if (nums[i] > nums[i + 1])
            {
                rotate(nums.begin(), nums.begin() + i + 1, nums.end());
                return is_sorted(nums.begin(), nums.end());
            }
        }
        return true;
    }
};

// -------------------------------------------------------------------------

int isSorted(int n, vector<int> a)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
