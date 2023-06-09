#include<stdio.h>
void main()
{
    int in_h;
    int in_m;
    int out_h;
    int out_m;
    int total_h=0;
    int total_m=0;
    int count_money=0;

    scanf("%d%d%d%d",&in_h,&in_m,&out_h,&out_m);

    total_h=out_h-in_h;
    total_m=out_m-in_m;

    if(total_m<=15){
        if(total_h==0){
            count_money+=0;
        }
        else if(total_h>0 && total_h<=3){
            count_money+=total_h*20;
        }
        else if(total_h>=4 && total_h<=6){
            count_money+=total_h*30;
        }
    }
    else if(total_m>15){
        if(total_h>=0 && total_h<=3){
            count_money+=(total_h+1)*20;
        }
        else if(total_h>=4 && total_h<=6){
            count_money+=total_h*30;
        }
        else if(total_h==6){
            count_money+=300;
        }
        else if(total_h>6){
            count_money+=300;
        }
    }
    printf("%d",count_money);
}
