#include<stdio.h>
void main(){
    int in_h;
    int in_m;
    int out_h;
    int out_m;
    int total_in=0;
    int total_out=0;
    int time_take=0;

    scanf("%d%d%d%d",&in_h,&in_m,&out_h,&out_m);

    if(in_h==0 || in_h==12){
        in_h=24;
    }
    if(out_h==0 || out_h==0){
        out_h=24;
    }
    total_in=(in_h*60)+in_m;
    total_out=(out_h*60)+out_m;
    time_take=total_out-total_in;
    printf("%d",time_take);

}
