#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        n -= 2;
        m -= 2;
        int row, column;
        row = n / 3;
        column = m / 3;
        if (n % 3)
        {
            row++;
        }
        if (m % 3)
        {
            column++;
        }
        cout << row * column << endl;
    }

    return 0;
}