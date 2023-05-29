#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, s;
        cin >> n >> s;
        long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long int start = 0, sum = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            while (sum > s)
            {
                sum -= arr[start];
                start++;
            }
            if (s == sum)
            {
                cout << start + 1 << " " << i + 1 << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}