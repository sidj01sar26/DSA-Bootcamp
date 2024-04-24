// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void addRE(string &num1, int p1, string &num2, int p2, int carry, string &answer)
    {
        // base case
        if (p1 < 0 && p2 < 0)
        {
            if (carry != 0)
            {
                answer.push_back(carry + '0');
            }
            return;
        }

        // 1 case
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0'; // Fix this line
        int sum = n1 + n2 + carry;
        int digit = sum % 10;
        carry = sum / 10;
        answer.push_back(digit + '0');

        // RE
        addRE(num1, p1 - 1, num2, p2 - 1, carry, answer);
    }

    string addStrings(string num1, string num2)
    {
        string answer = "";
        addRE(num1, num1.size() - 1, num2, num2.size() - 1, 0, answer);
        reverse(answer.begin(), answer.end());
        return answer;
    }
};