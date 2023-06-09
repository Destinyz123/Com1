#include<stdio.h>
void main()
{
    int type;
    int count=0;
    int porn=0;
    int ban;

    for(;;)
    {
        scanf("%d",&type);
        if(type==-1)
        {
            break;
        }
        if(type==4)
        {
            printf("Alert!! Porn contents\n");
            porn++;
            count++;
        }
        else
        {
            count++;
        }

        }
        ban=(porn*100)/count;

        if(ban>=60)
        {
            printf("The user was banned");

    }
}

