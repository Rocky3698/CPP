// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     long long t;

//     cin >> t;
//     while (t--)
//     {
//         long long n, q;
//         long long l, r, k;
//         cin >> n >> q;
//         vector<long long> v1(n + 2);
//         for (long long i = 1; i <= n; i++)
//         {
//             cin >> v1[i];
//         }
//         long long sum = v1[1];

//         vector<long long> csum(n + 1);
//         for (long long i = 1; i <= n; i++)
//         {
//             csum[i] = sum;
//             sum += v1[i + 1];
//         }

//         while (q--)
//         {

//             cin >> l >> r >> k;
//             long long sg = csum[r] - csum[l - 1];

//             long long add = csum[n] - sg;

//             add += ((r - l) + 1) * k;

//             if (add % 2 == 0)
//                 cout << "NO" << endl;

//             else
//                 cout << "YES" << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, q;
        cin >> n >> q;

        // long long  arr[n];
        vector<long long> v(n + 1);
        // cin >> v[0];
        for (long long i = 1; i <= n; i++)
        {
            cin >> v[i];
            v[i] += v[i - 1];
        }

        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            //! count koyta replace korbo
            long long rl = (r - l) + 1;

            //! replace gular total sum
            long long ks = rl * k;

            //! replace gular ager sum
            long long rem = v[r] - v[l - 1];

            //! total sum + replace total sum - replace gular ager sum
            long long s = v[n] + ks - rem;
            // cout << rl << " " << ks << " " <<v[n]<<" "<< rem << " " << s << endl;
            if (s % 2 == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}