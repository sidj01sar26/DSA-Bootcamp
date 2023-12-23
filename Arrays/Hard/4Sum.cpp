// Leetcode

// Companies - Microsoft Samsung Walmart Flipkart Oracle Google Netflix Adobe Amazon CRED Meesho Swiggy Dream11 InMobi Oyo

#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;

        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                int left = j + 1;
                int right = nums.size() - 1;

                while (left < right)
                {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];
                    if (sum == target)
                    {
                        s.insert({nums[i], nums[j], nums[left], nums[right]});
                        ++left;
                        --right;
                    }
                    else if (sum < target)
                    {
                        ++left;
                    }
                    else
                    {
                        --right;
                    }
                }
            }
        }

        for (const auto &quadruplet : s)
            output.push_back(quadruplet);

        return output;
    }
};
