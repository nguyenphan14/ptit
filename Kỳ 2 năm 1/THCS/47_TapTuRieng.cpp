#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    char str1[100];
    gets(str);
    gets(str1);
    char *pch;
    char *pch1;
    string s[100];
    string s1[100];
    int incre=0;
    int increb=0;
    pch= strtok(str, " ,.-");
    while (pch != NULL){
        s[incre]=pch;
        incre++;
        pch = strtok(NULL, " ,.-");
    }
    pch1= strtok(str1, " ,.-");
    while (pch1 != NULL){
        s1[increb]=pch1;
        increb++;
        pch1 = strtok(NULL, " ,.-");
    }
    sort(s, s+incre);
    for (int i=0; i<increb; i++){
        for(int j=0;j<incre; j++){
            if(s1[i]== s[j]){
                s[j]="xibalakaka";
            }
        }
    }
    for (int i=0; i<incre-1; i++){
        for(int j=i+1;j<incre; j++){
            if(s[i] == s[j]){
                s[j]="xibalakakaka";
            }
        }
    }
    for(int i=0; i<incre; i++){
        if (s[i]!= "xibalakaka" && s[i]!= "xibalakakaka"){
            cout << s[i] << " ";
        }
    }


}