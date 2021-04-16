#include <iostream>
#include <sstream>
using namespace std;
long long tinh(string s1)
{
    long long tong = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        tong = tong * 10 + s1[i] - 48;
    }
    return tong;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string s3, s4;
        s3 = s1;
        s4 = s2;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '6')
            {
                s1[i] = '5';
            }
        }
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] == '6')
            {
                s2[i] = '5';
            }
        }

        long long tong1 = 0, tong2 = 0;

        tong1 = tinh(s1);
        tong2 = tinh(s2);
        cout << tong1 + tong2 << " ";
        // cout << s1<< " "<<s2 << " "<<s3<< " "<<s4<< " ";
        for (int i = 0; i < s3.length(); i++)
        {
            if (s3[i] == '5')
            {
                s3[i] = '6';
            }
        }
        for (int i = 0; i < s4.length(); i++)
        {
            if (s4[i] == '5')
            {
                s4[i] = '6';
            }
        }
        tong1 = tinh(s3);
        tong2 = tinh(s4);
        cout << tong1 + tong2;
        cout << endl;
    }
    return 0;
}