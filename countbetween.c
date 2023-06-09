#include<stdio.h>
void main(){

    int x;
    int y;
    int z;
    int count;
    int fake=0;

    scanf("%d%d",&x,&y);
    for(;;){
        scanf("%d",&z);
        if(z<0){
            break;
        }
        if(z<=x && z>=y){
            fake=y;
            y=x;
            x=fake;
        }
        if(z>=x && z<=y){
            count++;
        }
    }
    printf("%d",count);

}
