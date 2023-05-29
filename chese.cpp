#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, a1, b1, ans = 0;
    char A, B;
    cin >> A >> a >> B >> b;

    if (A == 'a')
        a1 = 1;
    else if (A == 'b')
        a1 = 2;

    else if (A == 'c')
        a1 = 3;

    else if (A == 'd')
        a1 = 4;

    else if (A == 'e')
        a1 = 5;

    else if (A == 'f')
        a1 = 6;

    else if (A == 'g')
        a1 = 7;

    else if (A == 'h')
        a1 = 8;

    if (B == 'a')
        b1 = 1;
    else if (B == 'b')
        b1 = 2;

    else if (B == 'c')
        b1 = 3;

    else if (B == 'd')
        b1 = 4;

    else if (B == 'e')
        b1 = 5;

    else if (B == 'f')
        b1 = 6;

    else if (B == 'g')
        b1 = 7;

    else if (B == 'h')
        b1 = 8;

    // cout << a1 << " " << a << endl
    //      << b1 << " " << b << endl;

    // if (((a1 + a) == (b1 + b)) || (A == B))
    //     cout << abs(a - b) << endl;
    if (A == B && a == b)
    {
        cout << 0 << endl;
    }
    else if ((a1 + a) == (b1 + b))
    {
        ans = abs(a - b);
        cout << ans << endl;

        while (ans--)
        {
            if ((a1 - a) > (b1 - b))
                cout << "LU" << endl;
            else
                cout << "RD" << endl;
        }
    }
    else if (A == B)
    {
        ans = abs(a - b);
        cout << ans << endl;
        while (ans--)
        {
            if (a > b)
                cout << "U" << endl;
            else
                cout << "D" << endl;
        }
    }
    else if (a == b)
    {
        ans = abs(a1 - b1);
        cout << ans << endl;
        while (ans--)
        {
            if (a1 > b1)
                cout << "R" << endl;
            else
                cout << "L" << endl;
        }
    }
    else if ((a1 - a) == (b1 - b))
    {
        ans = abs(a1 - b1);
        cout << ans << endl;
        while (ans--)
        {
            if (a1 > b1)
                cout << "LD" << endl;
            else
                cout << "RU" << endl;
        }
    }

    // else if ((a == b) || (a1 - a == b1 - b))
    //     cout << abs(a1 - b1) << endl;
    else
    {
        if ((a1 + a) < (b1 + b))
        {
            // cout << abs(a1 - b1) + (b - (abs(a1 - b1) + a)) << endl;
            ans = abs(a1 - b1) + (b - (abs(a1 - b1) + a));
            cout << ans << endl;
            while (ans--)
            {
                /* code */
            }
            
        }

        else
        {
            // cout << (a - (abs(a1 - b1) + b)) + abs(a1 - b1) << endl;
            ans = (a - (abs(a1 - b1) + b)) + abs(a1 - b1);
            cout << ans << endl;
        }
    }
    return 0;
}
