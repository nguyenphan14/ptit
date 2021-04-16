#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int n, k, arr[MAX];
bool flag;

void init()
{
    flag = true;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
}

void result()
{
    for (int i = 1; i <= k; i++)
    {
        cout << arr[i];
    }
    cout << " ";
}

void nextCombination()
{
    int i = k;
    while (i > 0 && arr[i] == n - k + i)
    {
        i--;
    }
    if (i > 0)
    {
        arr[i] = arr[i] + 1;
        for (int j = i + 1; j <= k; j++)
        {
            arr[j] = arr[i] + j - i;
        }
    }
    else
    {
        flag = false;
    }
}

void solve() {}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        while (flag)
        {
            result();
            nextCombination();
        }
        cout << endl;
    }
    return 0;
}