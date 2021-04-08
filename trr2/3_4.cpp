#include <iostream>
#include <stack>
using namespace std;

#define MAX 101
int n;
bool a[MAX][MAX], visited[MAX];
stack<int> st;
int result[MAX];
int k, num_con_com;
void getInput()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    k = 0;
    num_con_com = 0;
}
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
void giveResult()
{
    for (int i = 0; i < k; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}
int main()
{
    getInput();
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            DFS(i);
            num_con_com++;
        }
    }
    //giveResult();
    cout << num_con_com;
    return 0;
}
