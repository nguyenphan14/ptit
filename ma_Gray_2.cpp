#include <bits/stdc++.h>
using namespace std;

char check(char a)
{
    if(a == '0') {
        return '1';
    }
    return '0';
}
string generate(string s)
{
    string res = "";
    res += s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            res += res[i - 1];
        }
        else
        {
            res += check(res[i - 1]);
        }
    }
    return res;
}
void solve()
{
    string s;
    cin >> s;
    cout << generate(s);
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
