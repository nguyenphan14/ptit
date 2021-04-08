#include <bits/stdc++.h>
using namespace std;

bool check = false;
int n, A[10];

void print()
{
    cin >> n;
    check = true;
    for (int i = 0; i < n; i++)
    {
        A[i] = 0;
    }
}

void ketqua()
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
            cout << 'A';
        else
            cout << 'B';
    }
    cout << " ";
}

void sinhNhiPhan()
{
    int i = n - 1;
    while (i >= 0 && A[i] == 1)
    {
        A[i] = 0;
        i--;
    }
    if (i >= 0)
        A[i] = 1;
    else
        check = false;
}

void solve()
{
    print();
    while(check) {
        ketqua();
        sinhNhiPhan();
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