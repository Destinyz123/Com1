#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    int a[x];
    int b[x];
    int sum=0;
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<x;i++){
        sum+=a[i]*b[i];
    }
    printf("%d",sum);
}
