// CodeStudio

int sumOfAllDivisors(int n)
{
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        answer = answer + (n / i) * i;
    }
    return answer;
}