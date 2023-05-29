#include <bits/stdc++.h>
#include <string>
#include <climits>
using namespace std;
int main()
{
	int n, k;
	int maxx;
	maxx = INT_MIN;
	cin >> n >> k;
	string s1;
	cin >> s1;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		if (s1[i] == 'a')
		{
			a++;
		}
		else
			b++;
	}
	cout << a << b << endl;

	a = 0;
	b = 0;
	for (int i = 0; i < n; i++)
	{
		if (s1[i] == 'a')
		{
			a++;
		}
		else
		{
			b++;
			if (b <= k)
			{
				a++;
			}
		}
	}
	maxx = max(maxx, a);
	cout << maxx << endl;

	return 0;
}