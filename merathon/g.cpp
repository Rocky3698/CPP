#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c=1,t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        cout <<"Case "<<c<<": "<< arr[1] << endl;
        c++;
    }

    return 0;
}