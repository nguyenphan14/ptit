#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define fi first
#define se second
#define ll long long
#define pb push_back


using namespace std;
const long long Max = 1e18;


void sinhInput(int numberTest) {
	srand (time(NULL));
	for (int i = 1; i <= numberTest; i++) {
		char fileIn[20];
		sprintf(fileIn, "test/%d.in", i);
		fstream out(fileIn, ios::out);
		// BAt dau sinh input
		long long a = (ll)rand() * (ll)rand() * (ll)rand() * (ll)rand() % Max;
		long long b = (ll)rand() * (ll)rand() * (ll)rand() * (ll)rand() % Max;
		out<<a<<" "<<b;
	}
}

void sinhOutput(int numberTest) {
	srand (time(NULL));
	for (int i = 1; i <= numberTest; i++) {
		char fileIn[20];
		char fileOut[20];
		sprintf(fileIn, "test/%d.in", i);
		sprintf(fileOut, "test/%d.out", i);
		fstream in(fileIn, ios::in);
		fstream out(fileOut, ios::out);
		// BAt dau sinh output
		long long a, b;
		in>>a>>b;
		out<<a+b;
	}
}

int main() {
	int numberTest;
	cin >> numberTest;
	sinhInput(numberTest);
	sinhOutput(numberTest);
}
