#include<stdio.h>
void main(){
    int x;
    int count=0;

    scanf("%d",&x);
    int a[x];

    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    int y;

    scanf("%d",&y);
    for(int i=0;i<x;i++){
        if(a[i]==y){
            printf("%d ",i+1);
            count++;
        }
    }
    if(count==0){
        printf("0");
    }
}
