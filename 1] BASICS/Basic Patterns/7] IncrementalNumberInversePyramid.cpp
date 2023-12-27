#include <bits/stdc++.h>
using namespace std;

void pattern7(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
        {
            cout << N - j + 1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int N = 5;
    pattern7(N);

    return 0;
}