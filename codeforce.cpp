// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, size;
//         cin >> a >> b;
//         if (a % 2 == 0)
//             size = a / 2;
//         else
//             size = (a / 2) + 1;

//         int arr[size];

//         for (int i = 1, j = 0; i <= a; i += 2, j++)
//         {
//             arr[j] = i;
//         }

//         long int start = 0, sum = 0;
//         bool flag = true;
//         for (int i = 0; i < size; i++)
//         {
//             sum += arr[i];
//             while (sum > a)
//             {
//                 sum -= arr[start];
//                 start++;
//             }
//             if (a == sum && i + start + 1 == b)
//             {

//                 cout << "YES" << endl;
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    int count = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] ==' ')
            count++;
    }
cout<<count<<endl;

    return 0;
}