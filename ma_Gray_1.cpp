#include <bits/stdc++.h>
using namespace std;

class Gray
{
	int m;
	long n;
	int arr[10000];

public:
	void input();
	void output();
};

void solve()
{
	Gray G;
	G.input();
	G.output();
}

void Gray::output()
{
	int res[20];
	for (int i = 0; i < n; i++)
	{
		int k = 0;
		int u = arr[i];
		while (u > 0)
		{
			res[k++] = u % 2;
			u /= 2;
		}
		for (int j = k + 1; j <= m; j++)
			cout << "0";
		while (k >= 1)
			cout << res[--k];
		cout << " ";
	}
	cout << endl;
}

void Gray::input()
{
	cin >> m;
	arr[0] = 0;
	arr[1] = 1;
	int pos = 1;
	n = 2;
	for (int i = 2; i <= m; i++)
	{
		pos = pos * 2;
		int u = 2 * n - 1;
		for (int j = n; j <= u; j++)
			arr[j] = arr[u - j] + pos;
		n = n * 2;
	}
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
