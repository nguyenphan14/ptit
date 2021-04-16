#include <bits/stdc++.h>
using namespace std;

void mark(int code, string ans)
{
    int exerciseIndex = 0;
    int point = 0;
    string res;
    if (code == 101)
    {
        res = "ABBADCCABDCCABD";
    }
    else
    {
        res = "ACCABCDDBBCDDBB";
    }
    for (int i = 0; i <= ans.size(); i++)
    {
        if ((int)ans[i] != 32)
        {
            cout << "compare " << res[exerciseIndex] << " and " << ans[exerciseIndex] << endl;
            if (res[exerciseIndex] == ans[exerciseIndex])
            {
                exerciseIndex++;
                point++;
            }
            else
            {
                exerciseIndex++;
            }
        }
    }
    cout << point;
    cout << "mark" << setprecision(3) << (float)((point * 10) / 15) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int code;
        cin >> code;
        cin.ignore();
        string answer;
        getline(cin, answer);
        mark(code, answer);
    }
    return 0;
}