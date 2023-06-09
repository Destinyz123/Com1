#include<stdio.h>
void main(){
    int in_h;
    int in_m;
    int out_h;
    int out_m;

    scanf("%d%d%d%d",&in_h,&in_m,&out_h,&out_m);

    printf("%d:%d",out_h-in_h,out_m-in_m);
}
