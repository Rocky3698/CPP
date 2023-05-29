#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n, k, count = 0, a = 0, b = 0, max_no = 0, temp;
    cin >> n >> k;
    int arr[n];
    string s1;
    cin >> s1;
    for (int i = 0; i < n; i++)
    {
        // if (s1[i] == 'a')
        // {
        //     a++;
        // }
        // else if (s1[i] == 'b' && count < k)
        // {
        //     a++;
        //     count++;
        //     if (k == count)
        //     {
        //         temp = a;
                
        //     }
        // }
        // else if (s1[i] == 'b' && count == k)
        // {
        //     a = abs(a - temp);
        //     count=0;
        // }
    
        //     max_no = max(max_no, a);
        
        if (s1[i]=='a')
        {
            arr[i]=1;
        }
        else arr[i]=0;

    }
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
    
}

    // cout << max_no << endl
    //      << b << endl
    //      << a << endl
    //      << count;

    return 0;
}