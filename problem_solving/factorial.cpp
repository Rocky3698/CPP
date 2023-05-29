#include <bits/stdc++.h>
using namespace std;
int FindFactorial(int num)
{
    int fact = 1;
    if (num == 0)
    {
        return 1;
    }

    for (int i = 1; i <= num; i++)
    {

        fact *= i;
    }
    return fact;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cout << FindFactorial(num) << endl;
    }

    return 0;
}