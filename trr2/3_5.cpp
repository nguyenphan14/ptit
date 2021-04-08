#include <iostream>
#include <stack>
#include <queue>        

using namespace std;

#define MAX 101
int n;
bool a[MAX][MAX], visited[MAX];
stack<int> st;
queue<int> qu;
int result[MAX], previous[MAX];
int k, head, tail, temp;
void getInput()
{
    cin >> n;
    cin >> head >> tail;
    for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
    cin >> a[i][j];
    k = 0;
}
void DFS(int i)
{
    st.push(i);
    result[k++] = i;
    visited[i] = true;
    while (!st.empty()) {
        int s = st.top();
        bool keep = false;
        for (int j = 1; j <= n; j++) {
            if (a[s][j] && !visited[j]) {
                st.push(j);
                result[k++] = j;
                previous[j] = s;
                visited[j] = true;
                keep = true;
                break;
            }
        }
        if (!keep)
        st.pop();
    }
}
void BFS(int i)
{
    qu.push(i);
    result[k++] = i;
    visited[i] = true;
    while (!qu.empty()) {
        int s = qu.front();
        qu.pop();
        for (int j = 1; j <= n; j++) {
            if (a[s][j] && !visited[j]) {
                qu.push(j);
                result[k++] = j;    
                if (!previous[j])
                previous[j] = s;
                visited[j] = true;
            }
        }
    }
}
void giveResult()
{
    temp = tail;
    if (previous[temp] == 0) {
        cout << "no path";
    }
    else {
        cout << temp << " ";
        while (previous[temp] != 0) {
            temp = previous[temp];
            cout << temp << " ";
        }
    }
    cout << endl;
}
void resetState() 
{
    for (int i = 0; i < MAX; i++) {
        visited[i] = false;
        previous[i] = 0;
    }
}
int main()
{
    getInput();
    DFS(head);
    cout << "DFS path: ";
    giveResult();
    resetState();
    BFS(head);
    cout << "BFS path: ";
    giveResult();
    return 0;
}
