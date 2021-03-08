#include<stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);
    int a[n][n], m = n;
    int b = 0, c = n*n;
    while(b <= n/2) {
        for( i = b; i < m; i++){
            a[b][i] = c;
            c--;
        }
        for( i = b + 1; i < m; i++){
            a[i][m-1] = c;
            c--;
        }
    	for( i = m -2; i >= b; i--){
            a[m-1][i] = c;
            c--;
        }
    	for ( i = m-2; i > b; i--){
            a[i][b] = c;
            c--;
        }
        b++;
		m--;
    }
    for( i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
