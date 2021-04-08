#include <iostream>
#include <stack>
#define MAX 100

using namespace std;

class Dothi
{
    int n;
    int A[MAX][MAX];

public:
    bool chuaxet[MAX];
    void readdata();
    void init();
    void stackDFS(int u);
};

void Dothi::readdata()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }
}

void Dothi::init()
{
    for (int i = 1; i <= n; i++)
    {
        chuaxet[i] = true;
    }
}

void Dothi::stackDFS(int u)
{
    stack<int> nganxep;
    cout << " " << u;
    chuaxet[u] = false;
    nganxep.push(u);
    while (!nganxep.empty())
    {
        int s = nganxep.top();
        nganxep.pop();
        for (int t = 1; t <= n; t++)
        {
            if ((A[s][t] == 1) && (chuaxet[t] == true))
            {
                cout << " " << t;
                chuaxet[t] = false;
                nganxep.push(s);
                nganxep.push(t);
                break;
            }
        }
    }
    return;
}

int main()
{
    Dothi G;
    G.readdata();
    G.init();
    G.stackDFS(1);
    return 0;
}