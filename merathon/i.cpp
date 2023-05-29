// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, b, h, w, p, a = INT_MIN, a1, ans = INT_MAX;
//     bool beds, budget;
//     cin >> n >> b >> h >> w;
//     while (h--)
//     {
//         beds = false, budget = false;
//         cin >> p;
//         while (w--)
//         {
//             cin >> a1;
//             if (a1 >= n)
//                 beds = true;
//             // a = max(a, a1);
//         }
//         // if (n <= a)
//         // {
//         //     beds = true;
//         // }

//         ans = min(ans, p * n);

//         if (ans <= b)
//         {
//             budget = true;
//         }
//     }
//     if (beds && budget)
//         cout << ans << endl;
//     else
//         cout << "stay home" << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, h, w;
   
    while (cin >> n >> b >> h >> w)
    {
       int ans = INT_MAX;
        bool access = false;
        for (int i = 0; i < h; i++)
        {
            int p;
            cin >> p;
            for (int j = 0; j < w; j++)
            {
                int a;
                cin >> a;
                if ((p * n <= b) && (a >= n))
                {
                    if (ans > p * n)
                    {
                        ans = p * n;
                    }
                    access = true;
                }
            }
        }
        if (access)
        {
            cout << ans << endl;
        }
        else
            cout << "stay home" << endl;
    }

    return 0;
}