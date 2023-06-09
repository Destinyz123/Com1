#include<stdio.h>
void main(){
    int x;

    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
           if(j>=i){
            printf("%d",(x-i)%10);
           }
           else {
            printf(" ");
           }
        }
        printf("\n");
    }
}
