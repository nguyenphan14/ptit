#include <iostream>
#include <queue>
using namespace std;

#define MAX 101
int n;
bool a[MAX][MAX], visited[MAX];
queue<int> qu;
int result[MAX];
int k;

void getInput()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
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
                visited[j] = true;
            }
        }
    }
}
void giveResult()
{
    for (int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}
void resetState()
{
    for (int i = 1; i <= n; i++) {
        visited[i] = false;
        result[i] = 0;
    }
    k = 0;
}
bool strongly_connected()
{
    for (int i = 1; i <= n; i++) {
        resetState();
        BFS(i);
        if (k != n) {
            return false;
        }
    }
    return true;
}
int main()
{
    getInput();
    if (strongly_connected()) {
        cout << "strongly connected";
    }
    else {
        cout << "not strongly connected";
    }
    return 0;
}
