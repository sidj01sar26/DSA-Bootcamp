#include <iostream>
using namespace std;

void nLetterTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    nLetterTriangle(4);
    return 0;
}
