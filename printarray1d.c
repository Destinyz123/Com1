#include<stdio.h>
void main(){
    int x;

    scanf("%d",&x);
    int a[x];

    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    int y;

    scanf("%d",&y);
    for(int i=0;i<x;i+=y){
        printf("%d ",a[i]);
    }
}
