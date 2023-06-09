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
    int x=((2*n)/3);
    int y=((1*n)/3);
    for(int i=0;i<n;i++){
        a[x][i]='#';
        a[y][i]='#';

        a[i][x]='#';
        a[i][y]='#';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
