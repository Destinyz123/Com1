#include<stdio.h>
void main(){
    int type1;
    int type2;
    int type3;
    int type4;
    int type5;
    int type;
    int money1=0;
    int money2=0;
    int money3=0;
    int money4=0;
    int money5=0;
    int total_money=0;
    int slip=0;
    int min=0;

    scanf("%d%d%d%d%d",&type1,&type2,&type3,&type4,&type5);
    scanf("%d",&type);
    money1=type1*20;
    money2=type2*50;
    money3=type3*100;
    money4=type4*500;
    money5=type5*1000;

    total_money=money1+money2+money3+money4+money5;
    if(type==1){
        slip=total_money/20;
        min=(total_money%20);
    }
    else if(type==2){
        slip=total_money/50;
        min=(total_money%50);
    }
    else if(type==3){
        slip=total_money/100;
        min=(total_money%100);
    }
    else if(type==4){
        slip=total_money/500;
        min=(total_money%500);
    }
    else if(type==5){
        slip=total_money/1000;
        min=(total_money%1000);
    }
    printf("%d\n",slip);
    if(min!=0){
        if(type==1){
            printf("%d",20-min);
        }
        else if(type==2){
            printf("%d",50-min);
        }
        else if(type==3){
            printf("%d",100-min);
        }
        else if(type==4){
            printf("%d",500-min);
        }
        else if(type==5){
            printf("%d",1000-min);
        }
    }
}

