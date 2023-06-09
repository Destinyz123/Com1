#include<stdio.h>
void main(){
    int x;
    int num;

    scanf("%d",&x);

    int a[100001]={0};


    for(int i=0;i<x;i++){
      scanf("%d",&num);
      a[num]++;
    }
    for(int i=1;i<=10000;i++){
        if(a[i]>0){
            printf("%d ",i);
        }
    }
}
