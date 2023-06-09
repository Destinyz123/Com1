#include<stdio.h>
void main(){
    int x;
    double sum=1;

    scanf("%d",&x);

    for(int i=0;i<x;i++){
        sum*=10;
    }
    printf("%.0lf",sum);
}

