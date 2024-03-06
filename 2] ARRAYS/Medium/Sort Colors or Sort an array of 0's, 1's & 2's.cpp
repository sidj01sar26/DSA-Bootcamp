// Leetcode

// Companies - Google Amazon Microsoft Netflix Tekion-corp Flipkart Bloomberg
//             Samsung CRED Meesho Swiggy Dream11 InMobi Oyo PayTM Byju's

#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
    }
};

// Or

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};