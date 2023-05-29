#include <bits/stdc++.h>
using namespace std;
class factor
{
public:
    int count = 0;
    factor(int num)
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
    }
    void print(int n)
    {
        if (n)
            cout << count * 2 + 2 << endl;
        else
            cout << 0 << endl;
    }
};

int main()
{
    int n;
    cout << "Enter a number to find its factors" << endl;
    cin >> n;
    factor obj(n);
    obj.print(n);
}