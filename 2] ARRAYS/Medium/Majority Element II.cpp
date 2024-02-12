// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        // Initialize candidates and their counts
        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;

        // Finding the two potential candidates
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (num == candidate1)
            {
                count1++;
            }
            else if (num == candidate2)
            {
                count2++;
            }
            else if (count1 == 0)
            {
                candidate1 = num;
                count1++;
            }
            else if (count2 == 0)
            {
                candidate2 = num;
                count2++;
            }
            else
            {
                // If neither candidate nor new candidate found, decrement counts
                count1--;
                count2--;
            }
        }

        // Reset counts for accurate counting in the second pass
        count1 = count2 = 0;

        // Counting occurrences of the potential candidates
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (num == candidate1)
            {
                count1++;
            }
            else if (num == candidate2)
            {
                count2++;
            }
        }

        // Final check to see if either candidate is actually a majority element
        vector<int> result;
        if (count1 > nums.size() / 3)
        {
            result.push_back(candidate1);
        }
        if (count2 > nums.size() / 3)
        {
            result.push_back(candidate2);
        }

        return result;
    }
};
