#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	int b[n];
	cin >> t;
	while (t--)
	{
		int s = 0;
		cin >> n;
		int a[2 * n];
		for (int i = 0; i < 2 * n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + 2 * n);
		for (int i = 0; i < 2 * n - 1; i++)
		{
			if (a[i] != a[i + 1])
			{
				b[s++] = a[i];
			}
		}
		for (int i = 0; i < 2*n; i++)
		{
			cout<<a[i]<<endl;
			
		}
		
	}

	return 0;
}