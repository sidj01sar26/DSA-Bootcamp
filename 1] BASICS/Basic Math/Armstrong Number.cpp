#include <bits/stdc++.h>

bool checkArmstrong(int n)
{
    int num = n;
    int d = 0;

    while (num)
    {
        num /= 10;
        d++;
    }

    num = n;
    int sum = 0;

    while (num)
    {
        int digit = num % 10;
        sum += pow(digit, d);
        num /= 10;
    }

    return sum == n;
}
