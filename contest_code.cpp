// #include <bits/stdc++.h>
// #include <string>
// using namespace std;
// int main()
// {
//     int t, count = 0;
//     cin >> t;
//     while (t--)
//     {
//         string s1,s2="";
//         int n;
//         cin >> n;
//         cin >> s1;
//         for (int i = 0; i < n; i++)
//         {
//             if (s1[i] == '1')
//             {
//                 count++;
//             }
//         }

//         if (count % 2 == 0)
//         {
//             for (int i = n-1; i >= 0; i++)
//             {
//                 if (s1[i]=='1')
//                 {
//                     s2[i]='-';
//                 }
//                 else s2[i]='+';
//             }

//         }
//         cout<<s2<<endl;

//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// #include <string>
// using namespace std;
// int main()
// {
//     int t, i;
//     cin >> t;
//     while (t--)
//     {
//         int size, count = 0;
//         cin >> size;
//         string s1, s2 = " ";
//         cin >> s1;

//         for (i = 0; i < size; i++)
//         {
//             if (s1[i] == '1')
//             {
//                 count++;
//             }

//             if ((s1[i] == '1' && i >= 1) && count % 2 == 0)
//             {
//                 s2.insert(i - 1, "-");
//             }
//             else if (i != 0)
//             {
//                 s2.insert(i - 1, "+");
//             }
//         }

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
        int n, count = 0, maximum = 0;
        cin >> n;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] && arr2[i])
                count++;
            else if (arr1[i] == 0 || arr2[i] == 0)
            {
                maximum = max(maximum, count);
                count = 0;
            }
        }
        maximum=max(maximum,count);
        cout << maximum << endl;
    }

    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int s;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//         int arr[s], brr[s];
//         int count = 0;
//         int max = 0;
//         for (int x = 0; x < s; x++)
//         {
//             cin >> arr[x];
//         }
//         for (int y = 0; y < s; y++)
//         {
//             cin >> brr[y];
//         }
//         for (int z = 0; z < s; z++)
//         {
//             if (arr[z] && brr[z])
//             {
//                 count++;
//             }
//             else if (arr[z] == 0 || brr[z] == 0)
//             {

//                 if (count > max)
//                 {
//                     max = count;
//                 }
//                 count = 0;
//             }

//             // max = count;
//         }
//         if (count > max)
//         {
//             max = count;
//         }
//         cout << max << endl;
//     }
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int s;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//         int arr[s], brr[s];
//         int count = 0;
//         int max=0;
//         for (int x = 0; x < s; x++)
//         {
//             cin >> arr[x];
//         }
//         for (int y = 0; y < s; y++)
//         {
//             cin >> brr[y];
//         }
//         for (int z = 0; z < s; z++)
//         {
//             if (arr[z] > 0 && brr[z] > 0)
//             {
//                 count++;
//                 max = count;
//             }
//             // 1 1 1 0 0 1 0 1 1 1 1 0 1 1
//             // 1 1 1 1 0 1 0 1 1 1 1 0 1 0
//        // cou=   1 2 3 0 0 1 0 1 2 3 4 0 1 0
//             else if (arr[z] == 0 || brr[z] == 0)
//             {
//                 count = 0;
//                 // max = 0;
//             }

//             // max = count;
//             if (count > max)
//             {
//                 max = count;
//             }
//         }

//         cout << max << endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n, total = 0, count = 0;
//   cin >> n;
//   for (int j = 6; j <= n; j++)
//   {
//     count = 0;
//     for (int i = 2; i <= j / 2; i++)
//     {

//       if (j % i == 0)
//       {
//         bool flag = false;
//         for (int k = 2; k <= i / 2; k++)
//         {
//           if (i % k == 0)
//           {
//             flag = true;
//             break;
//           }
//         }
//         if (flag == false)
//         {
//           count++;
//         }
//       }
//     }
//     if (count == 2)
//     {
//       total++;
//     }
//   }
//   cout << total << endl;
//   return 0;
// }