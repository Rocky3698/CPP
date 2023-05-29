#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int num)
{
    bool flag = false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = true;
            return false;
                }
    }
    if (flag == 0)
    {
        return true;
    }
    else return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = a + b;

        if (IsPrime(sum))
        {
            cout << "Alice" << endl;
        }
        else
            cout << "Bob" << endl;
    }

    return 0;
}