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
    int n;
    int count_box1=0;
    int count_box2=0;
    int count_box3=0;
    int whole1=0;
    int whole2=0;
    int whole3=0;

    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        box1=15*10*8;
        box2=25*15*12;
        box3=40*50*20;
        scanf("%d %d %d",&w,&l,&h);

        total_size=w*l*h;

        if(w<=15 && l<=10 && h<=8)
        {
            printf("1\n");
            count_box1++;
            whole1+=box1-total_size;
        }
        else if(w<=25 && l<=15 && h<=12)
        {
            printf("2\n");
            count_box2++;
            whole2+=box2-total_size;
        }
        else if(w<=50 && l<=40 && h<=20)
        {
            printf("3\n");
            count_box3++;
            whole3+=box3-total_size;
        }
        else
        {
            printf("Oversize product\n");
        }
    }
    printf("%d %d\n",count_box1,whole1);
    printf("%d %d\n",count_box2,whole2);
    printf("%d %d\n",count_box3,whole3);
}

