#include <bits/stdc++.h>
using namespace std;

void pattern11(int N)
{
    // Outer loop for number of rows.
    for (int i = 1; i <= 2 * N - 1; i++)
    {
        // stars would be equal to the row no. uptill first half
        int stars = i;

        // for the second half of the rotated triangle.
        if (i > N)
            stars = 2 * N - i;

        // for printing the stars in each row.
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int N = 5;
    pattern11(N);

    return 0;
}