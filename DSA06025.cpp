#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    int step = 0;
    
    for(int i = 0; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j+1] = current;
        
        cout << "Buoc " << step++ << ": ";
        for(int k = 0; k <= i; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
        
    }
} 

void solve() {
    int n;
    int arr[MAX];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertionSort(arr, n);
}

int main() {
    solve();
    return 0;
}