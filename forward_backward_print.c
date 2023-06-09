#include<stdio.h>
void main(){
    int x;
    int y;

    scanf("%d",&x);
    int a[x];

    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&y);
    if(y>=0){
        for(int i=0;i<x;i++){
            printf("%d ",a[i]+y);
        }
    }
    else if(y<0){
        for(int i=x-1;i>=0;i--){
            printf("%d ",a[i]+y);
        }
    }

}
