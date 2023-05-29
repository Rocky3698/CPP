#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, j;
    cin >> n;
    long long int size = n - 1;
    long long arr[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    for (i = 0; i < size; i++)
    {
        if (arr[i] + 1 != arr[i + 1])
        {
            cout << arr[i] + 1;
            break;
        }
    }

    return 0;
}