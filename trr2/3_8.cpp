#include <iostream>
#include <stack>
using namespace std;

#define MAX 101
int n;
bool a[MAX][MAX], visited[MAX];
stack<int> st;
int result[MAX], canh_cau[2][MAX];
int k, num_con_com, m;

void DFS(int i)
{
    st.push(i);
    result[k++] = i;
    visited[i] = true;
    while (!st.empty())
    {
        int s = st.top();
        bool keep = false;
        for (int j = 1; j <= n; j++)
        {
            if (a[s][j] && !visited[j])
            {
                st.push(j);
                result[k++] = j;
                visited[j] = true;
                keep = true;
                break;
            }
        }
        if (!keep)
            st.pop();
    }
}
int number_of_connected_component()
{
    int ncc = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            DFS(i);
            ncc++;
        }
    }
    return ncc;
}
void resetState()
{
    for (int i = 1; i <= n; i++)
    {
        visited[i] = false;
        result[i] = 0;
    }
    k = 0;
}
void getInput()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    k = 0;
    m = 0;
    num_con_com = number_of_connected_component();
}
void giveResult()
{
    for (int i = 0; i < m; i++)
    {
        cout << canh_cau[0][i] << " " << canh_cau[1][i] << endl;
    }
}
void duyet_canh_cau()
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i][j])
            {
                a[i][j] = a[j][i] = 0; // bo canh
                resetState();
                if (number_of_connected_component() > num_con_com)
                {
                    canh_cau[0][m] = i;
                    canh_cau[1][m++] = j;
                }
                a[i][j] = a[j][i] = 1; // tra lai canh
            }
        }
    }
}
int main()
{
    getInput();
    duyet_canh_cau();
    giveResult();
    return 0;
}