#include<stdio.h>
void main(){
    int x,n;
    scanf("%d %d",&x,&n);
    int sum=0;
    char a[x][n];
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
            a[i][j]=' ';
        }
    }
    for(int i=0;i<x;i++){
        a[i][i]='*';
        a[i][x-i-1]='*';

        a[i][i+(n-x)]='#';
        a[i][x-i-1+(n-x)]='#';
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
            printf("%c",a[i][j]);
            if(a[i][j]=='*'){
                sum++;
            }
        }
        printf("\n");
    }
    printf("%d",((x*2)-1)-sum);
}
