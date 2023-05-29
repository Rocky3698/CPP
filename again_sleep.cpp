// #include <bits/stdc++.h>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s1;
//         string s2;
//         int count = 0;
//         cin >> s2;
//         s1 = s2;
//         sort(s1.begin(), s1.end(), greater<char>());
//         int length = s1.length();
//         if (length > 2)
//         {
//             for (int i = 0; i < 2; i++)
//             {
//                 char max = s1[i];
//                 int max_position = s2.find(max);
//                 if (max_position != i)
//                 {
//                     char temp = s2[max_position];
//                     s2[max_position] = s2[i];
//                     s2[i] = temp;
//                     count++;
//                 }
//             }

//             if (count < 2)
//             {
//                 char min = s1[length - 1];
//                 int min_position = s2.find(min);
//                 if (min_position != length)
//                 {
//                     char temp = s2[min_position];
//                     s2[min_position] = s2[length - 1];
//                     s2[length - 1] = temp;
//                     count++;
//                 }
//             }
//             // char max2 = s1[1];
//             // int max_position2 = s2.find(max2);

//             // for (int i = 0; i < length - 1; i++)
//             // {

//             //     if (s1[i + 1] > s1[i] && count < 2)
//             //     {
//             //         int temp = s1[i];
//             //         s1[i] = s1[i + 1];
//             //         s1[i + 1] = temp;
//             //         count++;
//             //         cont++;
//             //     }
//             //     if (i == length - 2 && count < 2)
//             //     {
//             //         i = -1;
//             //         j++;
//             //     }
//             //     if (j > 2)
//             //     {
//             //         break;
//             //     }
//             // }

//             // if (cont < 2)
//             // {
//             // if (length - 1 < length - 2)
//             // {
//             //     int temp = s1[length - 1];
//             //     s1[length - 1] = s1[length - 2];
//             //     s1[length - 2] = temp;
//             // }
//             // }
//             // if (s1 == s2)
//             // {
//             //     int temp = s1[0];
//             //     s1[0] = s1[1];
//             //     s1[1] = s1[0];
//             // }
//         }
//         // int ans = stoi(s1);
//         cout << s2 << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        if (x == y)
        {
            cout << 0 << endl;
        }
        else
        {
            int sub = abs(x - y);
            int temp = sub;
            sub /= k;
            if (temp <= k)
            {
                cout << 1 << endl;
            }

            else
            {
                temp = temp % k;
                cout << sub + temp << endl;
            }
        }
    }

    return 0;
}