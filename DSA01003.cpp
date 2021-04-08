#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int n, arr[MAX];

void printArr() {
    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void nextPermutation() {
    int j = n - 1;
    while(j > 0 && arr[j] > arr[j+1]) {
        j--;
    }
    if(j > 0) {
        int k = n;
        while(arr[j] > arr[k]) {
            k--;
        }
        swap(arr[k], arr[j]);
        int l = j + 1;
        int r = n;
        while(l <= r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
        printArr();
    } else {
        sort(arr+1, arr+n+1);
        printArr();
    }
}

void solve() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    nextPermutation();
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}