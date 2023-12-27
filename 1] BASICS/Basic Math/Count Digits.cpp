int countDigits(int n)
{
    int count = 0;
    int temp = n;
    while (n)
    {
        int digit = n % 10;
        if (digit != 0)
        {
            if (temp % digit == 0)
            {
                count++;
            }
        }
        n = n / 10;
    }
    return count;
}

