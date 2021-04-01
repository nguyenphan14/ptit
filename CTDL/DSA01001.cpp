#include<bits/stdc++.h>
using namespace std;

string nextBinStr(string binStr) {
	int i = binStr.length();
	while(i > 0 && binStr[i] != '0') {
		binStr[i] = '0'; 
		i--;
	}
	if(i > 0) {
		binStr[i] = '1';
		return binStr;
	} 
	string newStr = "";
	for(int j = 0; j < binStr.length(); j++) 
		newStr.push_back('0');
	return newStr;
}

void solve() {
	string binStr;
	getline(cin, binStr);
	cout << nextBinStr(binStr) << endl;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		solve();
	}
}

