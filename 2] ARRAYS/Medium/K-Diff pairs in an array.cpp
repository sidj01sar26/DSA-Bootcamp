// Leetcode

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int, int>> answer;
        
        int i = 0;
        int j = 1;

        while (j < nums.size()) {
            int difference = nums[j] - nums[i];

            if (difference == k) {
                answer.insert({nums[i], nums[j]});
                i++;
                j++;
            } else if (difference > k) {
                i++;
            } else {
                j++;
            }

            if (i == j) {
                j++;
            }
        }
        return answer.size();
    }
};
