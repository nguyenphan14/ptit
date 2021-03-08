//#include <???.h> //Author by Quan dep trai

void in(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			scanf("%d",&x[i][j]);
		}
	}
}

void out(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}

void check(int x[][10],int n, int m=0){
	if(m == 0)
		m = n;
	int count =1;
	
	for(int i=0 ; i<n-i ; i++){
		for(int j=i ; j<m-i ; j++){
			x[i][j] = count++;
		}
				
		for(int j=i+1 ; j<m-i ; j++){
			x[j][n-i-1] = count++;
		}
		
		for(int j=n-2-i ; j>=i ; j--){
			x[n-1-i][j] = count++;
		}	
			
		for(int j=n-2-i ; j>i ; j--){
			x[j][i] = count++;
		}	
	}
	out(x,n);
	
}

int main(){
	int x[10][10],n;
	scanf("%d",&n);
	check(x,n);
	
	return 0;
}
