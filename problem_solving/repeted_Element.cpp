#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> t;

    for (int c = 1; c <= t; c++)
    {
        int count = 0;
        int n;
        cin >> n;

        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = i + 1; j < 2 * n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            if (count >= 2)
            {
                cout << "No" << endl;
                break;
            }
            else
                count = 0;
        }
        if (count == 0)
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}