// Leetcode

class Solution {
public:
    bool isGoodArray(const vector<int>& nums) {
        int result = 0;

        for (const auto& num : nums) {
            result = gcd(num, result);

            if (result == 1) {
                return true;
            }
        }

        return false;
    }
};