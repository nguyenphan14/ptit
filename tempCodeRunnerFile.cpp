#include <bits/stdc++.h>
using namespace std;

unsigned long long convert(string x)
{
    unsigned long long sum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        sum = sum * 10 + (int)((char)x[i] - '0');
    }
    // cout << " sum " << sum << endl;
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x1, x2;
        cin >> x1 >> x2;
        string str1 = x1;
        string str2 = x2;
        int length = str2.size();
        if (str1.size() > length)
        {
            length = str1.size();
        }

        string str3 = x1;
        string str4 = x2;

        for (int i = 0; i < length; i++)
        {
            if (str3[i] == '6')
            {
                str3[i] = '5';
            }
            if (str4[i] == '6')
            {
                str4[i] = '5';
            }
        }
        long long res2 = convert(str3) + convert(str4);
        cout << res2 << " ";
        for (int i = 0; i < length; i++)
        {
            if (str1[i] == '5')
            {
                str1[i] = '6';
            }
            if (str2[i] == '5')
            {
                str2[i] = '6';
            }
        }
        long long res1 = convert(str1) + convert(str2);
        cout << res1 << endl;
    }
    return 0;
}