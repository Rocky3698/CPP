// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int t;
//     cin >> t;
//     int c = 1;
//     while (t--)
//     {
//         int n;
//         int count = 0;
//         cin >> n;
//         char arr[3][n];
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[1][i] == 'o')
//             {
//                 if (arr[1][i + 1] == 'o' && arr[0][i] == 'o' && arr[0][i + 1] == 'o')
//                 {
//                     count++;
//                     i++;
//                 }
//                 else if (arr[1][i + 1] == 'o' && arr[2][i] == 'o' && arr[2][i + 1] == 'o')
//                 {
//                     count++;
//                     i++;
//                 }
//             }
//         }
//         if (count % 2 == 0)
//         {
//             cout << "Case " << c << ": Grandma" << endl;
//         }
//         else
//         {
//             cout << "Case " << c << ": Jhinuk" << endl;
//         }
//         c++;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         long long k;
//         cin>>n>>k;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         long long sum = 0;
//         long long test = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += arr[i];
//         }
//         long long temp;
//         temp = sum;
//         sum += arr[n - 1];
//         for (int i = 0; i < n - 1; i++)
//         {
//             test += arr[i];
//             if (test <= arr[i + 1])
//             {
//                 temp -= test;
//             }
//         }
//         cout << sum + temp << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int middleOfThree(int a, int b, int c)
// {
//     if ((a < b && b < c) || (c < b && b < a))
//         return b;

//     else if ((b < a && a < c) || (c < a && a < b))
//         return a;

//     else
//         return c;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     int tst = 1;
//     while (t--)
//     {
//         int a, b, c, k;
//         cin >> a >> b >> c >> k;
//         int maximum = max(a, max(b, c));
//         int minimum = min(a, min(b, c));
//         int mid = middleOfThree(a, b, c);
//         if (maximum - mid == k && mid - minimum == k)
//         {
//             cout << "Case " << tst << ": Peaceful" << endl;
//         }
//         else
//         {
//             cout << "Case " << tst << ": Fight" << endl;
//         }
//         tst++;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
class Largest
{
public:
    void printLargest()
    {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        if (num1 > num2)
        {
            if (num1 > num3)
            {
                cout << "Maximum number is = " << num1 << endl;
            }
            else
                cout << "Maximum number is = " << num3 << endl;
        }
        else if (num2 > num3)
        {
            cout << "Maximum number is = " << num2 << endl;
        }
        else
            cout << "Maximum number is = " << num3 << endl;
    }
};
int main()
{
    Largest obj;
    obj.printLargest();
    return 0;
}