#include <bits/stdc++.h>
using namespace std;

void generate(int a[], int n, int k)
{
	++a[n - 1];
	for (int i = n - 1; i > 0; --i)
	{
		if (a[i] > 1)
		{
			++a[i - 1];
			a[i] -= 2;
		}
	}
	int d = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 1)
			d++;
	if (d == k)
	{
		for (int i = 0; i < n; i++)
			cout << a[i];
		cout << endl;
	}
}

void solve()
{
	int n, k;
	cin >> n >> k;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = 0;
	for (int i = 0; i < pow(2, n); i++)
	{
		generate(a, n, k);
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
}
