// Leetcode

class Solution {
public:
    int findNthDigit(int n) {
        long len = 1, count = 9, start = 1;

        while (n > len * count) {
            n -= len * count;
            len++;
            count *= 10;
            start *= 10;
        }

        start += (n - 1) / len;
        string num = to_string(start);
        return num[(n - 1) % len] - '0';
    }
};
