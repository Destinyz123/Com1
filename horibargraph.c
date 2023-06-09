#include<stdio.h>
void main(){
    int x;

    for(;;){
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        for(int j=1;j<=x;j++){
            printf("*");
        }
        printf("\n");
    }
}
