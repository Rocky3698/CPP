#include <bits/stdc++.h>
using namespace std;

int middleOfThree(int a, int b, int c)
{
    if ((a < b && b < c) || (c < b && b < a))
        return b;

    else if ((b < a && a < c) || (c < a && a < b))
        return a;

    else
        return c;
}

int main()
{
    int t;
    cin >> t;
    int tst = 1;
    while (t--)
    {
        int a, b, c, k;
        cin >> a >> b >> c >> k;

        int maximum = max(a, max(b, c));
        int minimum = min(a, min(b, c));
        int mid = middleOfThree(a, b, c);
        if (a == b && b == c)
        {
            cout << "Case " << tst << ": Peaceful" << endl;
        }
        else if (maximum - mid == k && mid - minimum == k)
        {
            cout << "Case " << tst << ": Peaceful" << endl;
        }
        else
        {
            cout << "Case " << tst << ": Fight" << endl;
        }
        tst++;
    }

    return 0;
}