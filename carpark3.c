#include<stdio.h>
void main(){
    int car;
    int in_h;
    int in_m;
    int out_h;
    int out_m;
    int count_9=0;
    int count_12=0;
    int count_15=0;
    int count_18=0;

    scanf("%d",&car);
    for(int i=1;i<=car;i++){
        scanf("%d%d%d%d",&in_h,&in_m,&out_h,&out_m);
        if(in_h<9 && out_h>=9){
            count_9++;
        }
        if(in_h<12 && out_h>=12){
            count_12++;
        }
        if(in_h<15 && out_h>=15){
            count_15++;
        }
        if(in_h<18 && out_h>=18){
            count_18++;
        }
    }
    printf("9:00 %d\n",count_9);
    printf("12:00 %d\n",count_12);
    printf("15:00 %d\n",count_15);
    printf("18:00 %d\n",count_18);
}
