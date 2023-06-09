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
        //a[0][i]='*';
        //a[n-1][i]='*';
        a[i][0]='*';
        a[i][n-1]='*';

        //a[i][n-1-i]='*';
        a[i][i]='*';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
