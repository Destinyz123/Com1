#include<stdio.h>
void main()
{
    int box1=0;
    int box2=0;
    int box3=0;
    int w;
    int l;
    int h;
    int total_size=0;

    box1=15*10*8;
    box2=25*15*12;
    box3=40*50*20;
    scanf("%d %d %d",&w,&l,&h);

    total_size=w*l*h;
    if(w<=15 && l<=10 && h<=8){
        printf("1\n%d",box1-total_size);
    }
    else if(w<=25 && l<=15 && h<=12){
        printf("2\n%d",box2-total_size);
    }
    else if(w<=50 && l<=40 && h<=20){
        printf("3\n%d",box3-total_size);
    }
    else{
        printf("Oversize product\n");
        printf("%d",total_size-box3);
    }


}
