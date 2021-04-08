#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    int step = 1;
    for(int i = 0; i < n - 1; i++) {
        int swapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) {
            break;
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
    bubbleSort(arr, n);
}

int main() {
    solve();
    return 0;
}