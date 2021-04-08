#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void interchangeSort(int arr[], int n) {
    int step = 1;
    for(int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
        cout << "Buoc " << step++ << ": ";
        printArr(arr, n);
    }
}

void solve() {
    int n;
    int arr[MAX];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    interchangeSort(arr, n);
}

int main() {
    solve();
    return 0;
}