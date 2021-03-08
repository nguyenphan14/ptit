#include<bits/stdc++.h>
using namespace std;

void solve() {
	int x1, y1, x, y, s, n;
	cin >> n >> x >> y >> s;
	//One
	y += s;
	x1 = n/2 ;
	y1 = 0;
	for(int i = 1; i <= n; i++) {
		if(x == x1 && y == y1) {
			cout << "one" <<endl;;
			return;
		} else {
			x1++;
			y1++;
		}
	}
	//Two
	y += s;
	x1 = 0;
	y1 = 0;
	for(int i = 0; i <= n; i++) {
		if(x == x1 && y == y1) {
			cout << "two" <<endl;
			return;
		} else if(i % 2 != 0) {
			x1++;
		} else if(i % 2 == 0) {
			x1++; 
			y1++;
		}
	}
	//Three
	y += s;
	x1 = n-1;
	y1= n/2;
	for(int i = 1; i <= n; i++) {
		if(x == x1 && y == y1) {
			cout << "three" << endl; 
			return;
		} else if(i % 2 != 0) {
			x1--;
		} else if(i % 2 == 0) {
			x1--;
			y1++;
		}
	}
	//Four
	y += s;
	x1 = n - 1;
	y1 = n/2;
	for(int i = 1; i <= n; i++) {
		if(x == x1 && y == y1) {
			cout << "four" << endl;
			return;
		} else {
			x1--;
			y1++;
		}
	}
	cout << "you are lucky" << endl;
	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}

