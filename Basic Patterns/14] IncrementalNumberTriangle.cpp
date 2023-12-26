#include <iostream>
using namespace std;

void nNumberTriangle(int n)
{
    int number = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    nNumberTriangle(4);
    return 0;
}
