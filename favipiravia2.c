#include<stdio.h>
void main()
{
    int favi;
    int faht;
    int weight;
    float T;
    int oxyg;
    int count_favi=0;
    int count_faht=0;
    int patient;
    int remain_favi=0;
    int remain_faht=0;

    scanf("%d%d\n",&favi,&faht);
    scanf("%d",&patient);

    remain_faht=faht;
    remain_favi=favi;
    for(int i=1; i<=patient; i++)
    {
        scanf("%d%f%d",&weight,&T,&oxyg);


        if(T>=37.5 && oxyg<90)
        {
            count_favi=3*weight;
            count_faht=count_favi*4+120;

            if(remain_favi>=count_favi && remain_faht>=count_faht)
            {
                printf("OK\n");
                remain_faht-=count_faht;
                remain_favi-=count_favi;


            }
            else if(remain_favi>=count_favi && remain_faht<count_faht)
            {
                printf("No capsule\n");
                remain_favi-=count_favi;
            }
            else if(remain_favi<count_favi && remain_faht>=count_faht)
            {
                printf("No Favipiravir\n");
                remain_faht-=count_faht;
            }
            else
            {
                printf("Not enough both\n");
            }
        }
        else if(T>=37.5 && oxyg>=90)
        {
            count_favi=2*weight;
            count_faht=count_favi*4+120;

            if(remain_favi>=count_favi && remain_faht>=count_faht)
            {
                printf("OK\n");
                remain_faht-=count_faht;
                remain_favi-=count_favi;
            }
            else if(remain_favi>=count_favi && remain_faht<count_faht)
            {
                printf("No capsule\n");
                remain_favi-=count_favi;
            }
            else if(remain_favi<count_favi && remain_faht>=count_faht)
            {
                printf("No Favipiravir\n");
                remain_faht-=count_faht;
            }
            else
            {
                printf("Not enough both\n");
            }
        }
        else if(T<37.5 && oxyg<90)
        {
            count_favi=2*weight;
            count_faht=count_favi*4+120;

            if(remain_favi>=count_favi && remain_faht>=count_faht)
            {
                printf("OK\n");
                remain_faht-=count_faht;
                remain_favi-=count_favi;
            }
            else if(remain_favi>=count_favi && remain_faht<count_faht)
            {
                printf("No capsule\n");
                remain_favi-=count_favi;
            }
            else if(remain_favi<count_favi && remain_faht>=count_faht)
            {
                printf("No Favipiravir\n");
                remain_faht-=count_faht;

            }
            else
            {
                printf("Not enough both\n");
            }
            count_faht=0;
            count_favi=0;
        }
        else
        {

            if(remain_faht>=120)
            {
                remain_faht-=120;
                printf("OK\n");
            }
            else if(remain_faht<120)
            {
                printf("No capsule\n");
            }
        }
    }
    printf("%d %d",remain_favi,remain_faht);

}
