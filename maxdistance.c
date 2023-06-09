#include<stdio.h>
void main(){
    int x;
    int y;
    int max=-2000000000;
    int min=2000000000;
    int total_max=0;

    for(;;){
        scanf("%d%d",&x,&y);
        if(x==0 && y==0){
            break;
        }
        if(x!=0){
            min=x;
        }
        if(y!=0){
            max=y;
        }
        if(max-min>total_max){
            total_max=max-min;
        }

    }
    printf("%d",total_max);
}
