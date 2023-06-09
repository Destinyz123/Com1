#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=' ';
        }
    }
    for(int i=0;i<n;i++){
        a[i][0]='*';
        a[i][n-1]='*';
        a[0][i]='*';
        a[n-1][i]='*';

        a[i][n/2-1]='*';
        a[i][n/2-2]='*';
        a[i][n/2]='*';
        a[i][n/2+2]='*';
        a[i][n/2+1]='*';

        a[n/2][i]='*';
        a[n/2+1][i]='*';
        a[n/2+2][i]='*';
        a[n/2-2][i]='*';
        a[n/2-1][i]='*';

        a[i][i-1]='*';
        a[i][i+1]='*';
        a[i][i]='*';

        a[i][n-1-i-1]='*';
        a[i][n-1-i]='*';
        a[i][n-1-i+1]='*';


    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
