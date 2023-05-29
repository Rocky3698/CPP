#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class Sieve
{
private:
    vector<bool> primes;

public:
    Sieve(int size)
    {
        primes.resize(size + 1, true);
        primes[0] = primes[1] = false;
        int limit = sqrt(size);
        for (int i = 2; i <= limit; i++)
        {
            if (primes[i])
            {
                for (int j = i * i; j <= size; j += i)
                {
                    primes[j] = false;
                }
            }
        }
    }

    int countPrimes(int start, int end)
    {
        int count = 0;
        for (int i = start; i <= end; i++)
        {
            if (primes[i])
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cout << "Enter the range (N to M): ";
    cin >> n >> m;

    Sieve sieve(m);
    int count = sieve.countPrimes(n, m);
    cout << "There are " << count << " prime numbers between " << n << " and " << m << endl;

    return 0;
}
