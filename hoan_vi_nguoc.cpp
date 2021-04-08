//sinh hoan vi nguoc
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		a[i] = n - i;
	for (int i = 0; i < n; i++)
		cout << a[i];
	for (int i = n - 1; i > 0; i--)
	{
		if (a[i] < a[i - 1])
		{
			int j;
			for (j = n - 1; j >= i; j--)
			{
				if (a[j] < a[i - 1])
				{
					swap(a[j], a[i-1]);
					break;
				}
			}
			for (j = n - 1; j > ((n - 1 + i) / 2); j--)
			{
				swap(a[j], a[i + n - 1 - j]);
			}
			cout << " ";
			for (j = 0; j < n; j++)
				cout << a[j];
			i = n;
		}
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}
