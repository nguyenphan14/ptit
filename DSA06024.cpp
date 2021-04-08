#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    int step = 1;
    int minIndex;
    for(int i = 0; i < n - 1; i++) {
        minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
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
    selectionSort(arr, n);
}

int main() {
    solve();
    return 0;
}