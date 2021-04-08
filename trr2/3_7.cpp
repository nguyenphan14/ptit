#include <iostream>
#include <stack>
using namespace std;

#define MAX 101
int n;
bool a[MAX][MAX], visited[MAX];
stack<int> st;
int result[MAX], dinh_tru[MAX];
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
void resetState(int v)
{
    for (int i = 1; i <= n; i++) {
        visited[i] = false;
        result[i] = 0;
    }
    visited[v] = true;
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
        cout << dinh_tru[i] << " ";
    }
    cout << endl;
}
void duyet_dinh_tru()
{
    for (int i = 1; i <= n; i++) {
        resetState(i);
        if (number_of_connected_component() > num_con_com) {
            dinh_tru[m++] = i;
        }
    }
}
int main()
{
    getInput();
    duyet_dinh_tru();
    giveResult();
    return 0;
}