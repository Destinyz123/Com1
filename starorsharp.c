#include<stdio.h>
void main(){
    int x;
    int y;

    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        scanf("%d",&y);
        if(y%2==0){
            for(int j=1;j<=y;j++){
                printf("#");
            }
        }
        else{
            for(int j=1;j<=y;j++){
                printf("*");
            }
        }
        printf("\n");
    }
}
