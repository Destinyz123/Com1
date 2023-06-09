#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char a[n][n];
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            a[r][c]=' ';
        }
    }

    for(int i=0;i<n;i++){
        a[n/2][i]='*';

        a[i][n/2]='*';

        a[i][n-1-i]='*';
        a[i][i]='*';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
