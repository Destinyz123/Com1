#include<stdio.h>
void main(){
    int x;

    scanf("%d",&x);
    int a[x][x];

    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum_up=0;
    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
            sum_up+=a[i][j];
        }
    }
    int sum_down=0;
    for(int i=1;i<x;i++){
        for(int j=0;j<i;j++){
            sum_down+=a[i][j];
        }
    }
    printf("%d\n%d",sum_up,sum_down);
}

