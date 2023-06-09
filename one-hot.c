#include<stdio.h>
void main(){
    int x;

    scanf("%d",&x);
    int a[x][10];

    for(int i=0;i<x;i++){
        for(int j=0;j<10;j++){
            a[i][j]=0;
        }
    }
    int y;

    for(int i=0;i<x;i++){
            scanf("%d",&y);
            a[i][y]++;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<10;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
