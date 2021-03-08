#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[100],b[100],s1[100][100],s2[100][100],s3[100][100],temp[100][100];
	int count=0,count2=0,count3=0;
	gets(a);
	gets(b);
	char *token,*token2;
	token=strtok(a," ");
	while(token != NULL){
		strcpy(s1[count++],token);
		token=strtok(NULL," ");
	}
	token2=strtok(b," ");
	while(token2 != NULL){
		strcpy(s2[count2++],token2);
		token2=strtok(NULL," ");
	}
	if(count>count2){
		for(int i = 0 ; i < count ; i++){
			int check = 0 ;
			for(int j = 0 ; j < count2 ; j++){
				if(strcmp(s1[i],s2[j])==0){
					check = 1;
					break ;
				}
			}
			if(check == 0) strcpy(s3[count3++],s1[i]) ;
		}
	}
	else{
		for(int i = 0 ; i < count2 ; i++){
			int check = 0 ;
			for(int j = 0 ; j < count ; j++){
				if(strcmp(s2[i],s1[j])==0){
					check = 1;
					break ;
				}
			}
			if(check == 0) strcpy(s3[count3++],s2[i]) ;
		}
	}
	for (int i = 0; i < count3; i++) {
		for (int j = 0; j < count3-i-1; j++) {
			if (strcmp(s3[j],s3[j+1]) > 0) {
				strcpy(temp[0],s3[j]);
				strcpy(s3[j],s3[j+1]);
				strcpy(s3[j+1],temp[0]);
			}
		}
	}
	for(int i = 0 ; i < count3 ; i++){
		int check = 0 ;
		for(int j = 0 ; j < i ; j++){
			if(strcmp(s3[i],s3[j])==0) check = 1 ;
		}
		if(check==0) cout << s3[i] << " " ;
	}
return 0;
}

