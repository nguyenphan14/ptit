#include<bits/stdc++.h>
using namespace std;
int n,a[10];
bool check=false; 
void In(){
	cin>>n;
	check=true;
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}
void Result(){
	for(int i=0;i<n;i++){
		if(a[i]==0) cout<<'A';
		else cout<<'B';
	}
	cout<<" ";
}
void Sinh(){
	int i=n-1;
	while(i>=0&&a[i]==1){
		a[i]=0;i--;
	}
	if(i>=0) a[i]=1;
	else check=false;
} 
int main(){
	int test;
	cin>>test;
	while(test--){
		In();
		while(check){
			Result();
			Sinh();	
		}
		cout<<endl;
	}
}
