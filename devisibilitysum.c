#include<stdio.h>
void main(){

    int x;
    int y;
    int z;
    int count_x=0;
    int count_y=0;
    int count_xy=0;

    scanf("%d%d\n",&x,&y);
    for(;;){
        scanf("%d",&z);
        if(z<=0){
            break;
        }
        if(z%x==0 && z%y!=0){
            count_x+=z;
        }
        else if(z%x!=0 && z%y==0){
            count_y+=z;
        }
        else if(z%x==0 && z%y==0){
            count_xy+=z;
        }
    }
    printf("%d\n",count_x);
    printf("%d\n",count_y);
    printf("%d",count_x+count_y+count_xy);






















}
