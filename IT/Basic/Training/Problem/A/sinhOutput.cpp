#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
//rieng sinh output thi ko can sua gi ca
int main () {
    int N = 15;
    string solve;
    cin >> solve;
    for (int i = 0; i < N; i++) {
    	clock_t tStart = clock();
        string s;
        ostringstream convert;
        convert << i+1;
        s=convert.str();
        string output=solve+"<test/"+s+".in"+">test/"+s+".out";
        const char *command = output.c_str();
        system(command);
        cout << "Created output test:" << i+1 <<"     ";
    	printf("Time taken in test %d: %.2fs\n",i+1, (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
}
