#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int length, arr[MAX];
bool flag = true;

void init()
{
    flag = true;
    for (int i = 1; i <= length; i++)
    {
        arr[i] = 0;
    }
}

void genBin()
{
    int i = length;
    while (i > 0 && arr[i] != 0)
    {
        arr[i] = 0;
        i--;
    }
    if (i > 0)
    {
        arr[i] = 1;
    }
    else
    {
        flag = false;
    }
}

void solve()
{
    int n;
    cin >> n;
    length = n / 2;
    if (n % 2 == 0)
    {   
        init();
        while (flag)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << arr[i] << " ";
            }
            for (int i = n / 2; i >= 1; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            genBin();
        }
    } else {
        init();
        while (flag)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << arr[i] << " ";
            }
            cout << 0 << " ";
            for (int i = n / 2; i >= 1; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            for (int i = 1; i <= n / 2; i++)
            {
                cout << arr[i] << " ";
            }
            cout << 1 << " ";
            for (int i = n / 2; i >= 1; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            genBin();
        }
    }
}

int main()
{
    solve();
    return 0;
}