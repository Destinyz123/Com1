#include<stdio.h>
void main(){
    int x;
    int y;

    scanf("%d %d",&x,&y);
    int a[x][y];

    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            a[i][j]=0;
        }
    }
    int z;
    scanf("%d",&z);
    int row;
    int col;
    for(int i=1;i<=z;i++){
        scanf("%d %d",&row,&col);
        a[row][col]+=i;
    }
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
