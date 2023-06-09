#include<stdio.h>
void main(){
    int x;
    int y;

    scanf("%d %d",&x,&y);
    if(x==1){
        if(y==2){
            printf("2");
        }
        else if(y==3){
            printf("1");
        }
        else if(y==1){
            printf("0");
        }
    }
    else if(x==2){
        if(y==1){
            printf("1");
        }
        else if(y==3){
            printf("2");
        }
        else if(y==2){
            printf("0");
        }
    }
    else if(x==3){
        if(y==1){
            printf("2");
        }
        else if(y==2){
            printf("1");
        }
        else if(y==3){
            printf("0");
        }
    }
}
