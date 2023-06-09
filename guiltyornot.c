#include<stdio.h>
void main()
{
    int x;
    int get_money1;
    int judge1;
    int get_money2;
    int judge2;
    int get_money3;
    int judge3;
    int get_money4;
    int judge4;
    int get_money5;
    int judge5;
    int total_judge=0;
    int total_get_money=0;


    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        scanf("%d%d%d%d%d%d%d%d%d%d",&judge1,&get_money1,&judge2,&get_money2,&judge3,&get_money3,&judge4,&get_money4,&judge5,&get_money5);

        if(judge1==1)
        {
            if(get_money1==1)
            {
                total_get_money++;
            }
            if(get_money1==0)
            {
                total_judge++;
            }
        }
        if(judge1==0)
        {
            if(get_money1==0)
            {
                total_get_money++;
            }
            if(get_money1==1)
            {
                total_get_money++;
            }
        }
        if(judge2==1)
        {
            if(get_money2==1)
            {
                total_get_money++;
            }
            if(get_money2==0)
            {
                total_judge++;
            }
        }
        if(judge2==0)
        {
            if(get_money2==0)
            {
                total_get_money++;
            }
            if(get_money2==1)
            {
                total_get_money++;
            }
        }
        if(judge3==1)
        {
            if(get_money3==0)
            {
                total_judge++;
            }
            if(get_money3==1)
            {
                total_get_money++;
            }
        }
        if(judge3==0)
        {
            if(get_money3==0)
            {
                total_get_money++;
            }
            if(get_money3==1)
            {
                total_get_money++;
            }
        }
        if(judge4==1)
        {
            if(get_money4==0)
            {
                total_judge++;
            }
            if(get_money4==1)
            {
                total_get_money++;
            }
        }
        if(judge4==0)
        {
            if(get_money4==1)
            {
                total_get_money++;
            }
            if(get_money4==0)
            {
                total_get_money++;
            }
        }
        if(judge5==1)
        {
            if(get_money5==1)
            {
                total_get_money++;
            }
            if(get_money5==0)
            {
                total_judge++;
            }
        }
        if(judge5==0)
        {
            if(get_money5==0)
            {
                total_get_money++;
            }
            if(get_money5==1)
            {
                total_get_money++;
            }

        }
        if(total_judge>total_get_money)
        {
            printf("Case#%d was guilty\n",i);

        }
        else if(total_judge<total_get_money)
        {
            printf("Case#%d was not guilty\n",i);

        }
        total_judge=0;
        total_get_money=0;
    }


}
