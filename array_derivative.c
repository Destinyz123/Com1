#include<stdio.h>
int derivative(int* a,int x){
for(int i=0;i<x-1;i++){
        if(i==0){
            printf("%d ",a[i]-a[i]);
        }
        printf("%d ",a[i+1]-a[i]);
    }
}
void main(){
    int x;

    scanf("%d",&x);
    int a[x];

    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    derivative(a,x);
}
