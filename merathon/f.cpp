#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {

        int k;
        cin >> k;
        if (!k)
            break;
        int x, y, x1, y1;
        cin >> x >> y;
        while (k--)
        {
            cin >> x1 >> y1;
            if (x1 > x && y1 > y)
            {
                cout << "NE" << endl;
            }
            else if (x1 < x && y1 > y)
            {
                cout << "NO" << endl;
            }
            else if (x1 < x && y1 < y)
            {
                cout << "SO" << endl;
            }
            else if (x1 > x && y1 < y)
            {
                cout << "SE" << endl;
            }
            else
                cout << "divisa" << endl;
        }
    }

    return 0;
}