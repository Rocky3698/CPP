#include <iostream>
#include <climits>
using namespace std;
int max__min(int arr[], int n, int max_min[2])
{
    int maxno = INT_MIN;
    int minno = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxno)
        {
            maxno = arr[i];
        }
        if (arr[i] < minno)
        {
            minno = arr[i];
        }
    }

    max_min[0] = maxno;
    max_min[1] = minno;
    return max_min[2];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_min[2];
    max__min(arr, n, max_min);
    for (int i = 0; i < 2; i++)
    {
        cout << max_min[i] << endl;
    }
    // int maxno = INT_MIN;
    // int minno = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > maxno)
    //     {
    //         maxno = arr[i];
    //     }
    //     if (arr[i] < minno)
    //     {
    //         minno = arr[i];
    //     }
    // }
    // cout << maxno << " " << minno << endl;

    return 0;
}
