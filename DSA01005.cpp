#include <bits/stdc++.h>
#define MAX 10000
using namespace std;
int n, arr[MAX];
bool isLast = false;

void init()
{
    cin >> n;
    isLast = false;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
}

void printArr()
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i];
    }
    cout << " ";
}

void nextPermutation()
{
    int j = n - 1;
    while (j > 0 && arr[j] > arr[j + 1])
    {
        j--;
    }
    if (j > 0)
    {
        int k = n;
        while (arr[j] > arr[k])
        {
            k--;
        }
        swap(arr[k], arr[j]);
        int l = j + 1;
        int r = n;
        while (l <= r)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
    else
    {
        isLast = true;
    }
}

void solve()
{
    init();
    while(!isLast) {
        printArr();
        nextPermutation();
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