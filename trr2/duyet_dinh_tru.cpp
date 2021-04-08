#include<iostream>
#include<stack>
#define MAX 100

using namespace std;

class Dothi {
    int n;
    int A[MAX][MAX];
    
    public:
        bool chuaxet[MAX];
        void readdata();
        void init();
        void dfs(int  u);
        void duyettru();
};

void Dothi::readdata() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> A[i][j];
        }
    }
}

void Dothi::init() {
    for(int i = 1; i <= n; i++) {
        chuaxet[i] = true;
    }
}

void Dothi::dfs(int u) {
    chuaxet[u] = false;
    for(int j = 1; j <= n; j++) {
        if(A[u][j] == 1 && chuaxet[j] == true) {
            dfs(j);
        }
    }
}

void Dothi::duyettru() {
    init();
    for(int u = 1; u <= n; u++) { // duyet tap dinh
        // xoa dinh u khoi DPS
        chuaxet[u] = false;
        if(u != n) {
            dfs(1);
        }
        for(int k  = 1; k <= n; k++) {
            if(chuaxet[k] == true) {
                cout << u << " ";
                break;
            }
        }
        init();
    }
}

int main () {
    Dothi G;
    G.readdata();
    G.duyettru();
}