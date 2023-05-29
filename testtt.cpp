// #include <bits/stdc++.h>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int c1, c2;
//     c1 = 0;
//     c2 = 0;
//     string s1 = "";
//     string s2 = "";
//     int a, b;
//     cin >> a >> b;
//     if (a > b)
//     {
//         cout << "Argentina" << endl;
//     }
//     else if (b > a)
//     {
//         cout << "Brazil" << endl;
//     }
//     else
//     {

//         cin >> s1 >> s2;

//         while (true)
//         {
//             c1 = 0;
//             c2 = 0;
//             int i = 0;
//             int j = 0;
//             for (i = 0; i < s1.size(); i++)
//             {
//                 if (s1[i] == '1')
//                 {
//                     c1++;
//                 }
//             }

//             for (j = 0; j < s2.size(); j++)
//             {
//                 if (s2[j] == '1')
//                 {
//                     c2++;
//                 }
//             }

//             if (c1 > c2)
//             {

//                 cout << "Argentina" << endl;

//                 break;
//             }
//             else if (c2 > c1)
//             {

//                 cout << "Brazil" << endl;

//                 break;
//             }
//             else

//                 cin >> s1 >> s2;
//         }
//     }

//     return 0;
// }


// C++ program to convert a decimal
// number to binary number

// #include <iostream>
// #include <array>
// using namespace std;

// void decToBinary(int n)
// {

//     int binaryNum[100];

//     int i = 0;
//     while (n > 0)
//     {

//         binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     for (int j = i - 1; j >= 0; j--)
//         cout << binaryNum[j];
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int count = 0;
//         int s1[] = {}, s2[] = {};
//         for (int i = 0; i < s1.size(); i++)
//         {
//             /* code */
//         }

//         int a[] = {}, b[] = {}, c[] = {}, d[] = {};
//         for (int i = 0; i < s1.size(); i++)
//         {
//             if (s1[i] != '.')
//             {
//                 a += s1[i];
//             }
//             else if (count == 1)
//             {
//                 b[i] = s1[i];
//             }
//             else if (count == 2)
//             {
//                 c[i] = s1[i];
//             }
//             else if (count == 3)
//             {
//                 d[i] = s1[i];
//             }
//             else
//                 count++;
//         }
//         stoi(a);
//         stoi(b);
//         stoi(c);
//         stoi(d);

//         decToBinary(int(a));
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// #include <string>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     string s1;
//     cin >> s1;
//     bool flag = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (s1[i] >= 'A' && s1[i] <= 'Z')
//         {
//             cout << "YES" << endl;
//             flag = true;
//             break;
//         }
//     }
//     if (flag == false)
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }