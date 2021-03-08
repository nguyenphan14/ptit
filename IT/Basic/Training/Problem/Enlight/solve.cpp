#include<bits/stdc++.h>
using namespace std;

int enlightenPark(int m, int n) {
	if(m % 2 == 0) {
		return m/2*n;
	}
	if(n % 2 == 0) {
		return n/2*m;
	}
	int sum = 0;
	if(n < m) {
		int temp = m;
		m = n;
		n = temp;
	}
	for(int i = n; i >= 1; i-=2) {
		if(m < 0) {
			break;
		} 
		if(m == 1) {
			sum = sum +i/2 +1;
		} else {
			sum = sum + i/2*2 + m/2*2;
		} 
		m -= 2;
	}
	return sum;
}

void solve() {
	int m, n;
	cin >> m >> n;
	cout << enlightenPark(m, n);
}

int main() {
	int t = 1;
//	cin >> t;
	while(t--) {
		solve();
	}
}

