#include<stdio.h>
void main(){
    int x;

    scanf("%d",&x);
    for(int i=1;i<=x/3;i++){
       for(int i=1;i<=x;i+=3){
        printf("*");
        printf("  ");
    }
    printf("\n ");
    for(int i=2;i<=x;i+=3){
        printf("*");
        printf("  ");
    }
    printf("\n  ");
    for(int i=3;i<=x;i+=3){
        printf("*");
        printf("  ");
    }
    printf("\n");
    }

}
