// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, a, count = 0, zero = 0;
//         cin >> n;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a;
//             if (!a)
//                 zero++;
//             v.emplace_back(a);
//         }
//         if (!zero)
//         {
//             cout << 0 << endl;
//             return 0;
//         }
//         for (auto it = v.begin(); it != v.end(); it++)
//         {
//             if ((it + 2 == v.end() && *(it)) && *(it) < *(it - 1))
//             {
//                 count += *(it - 1) - *(it);
//             }
//             else if (*(it) == 0 && it != v.begin())
//             {

//                 count += *(it - 1);
//                 v.erase((it - 1), (it + 1));
//                 it -= 2;
//             }
//         }
//         cout << count << endl;
//     }

//     return 0;
// }
