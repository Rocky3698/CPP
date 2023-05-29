#include <bits/stdc++.h>
using namespace std;
int main()
{
    double d, dp, l, dep;
    vector<double> v(101);
    while (true)
    {
        cin >> d >> dp >> l >> dep;
        if (d < 0)
        {
            break;
        }
        int m;
        double p;
        while (dep--)
        {
            cin >> m >> p;
            for (int i = m; i < 101; i++)
            {
                v[i] = p;
            }
        }
        int ans = 0;
        double mp = l / d, cv = (l + dp) * (1 - v[0]), cl = l;
        while (cv < cl)
        {
            ans++;
            cl -= mp;
            cv *= (1 - v[ans]);
        }
        cout << ans << " month";
        if (ans != 1)
        {
            cout << "s";
        }
        cout << endl;
    }

    return 0;
}