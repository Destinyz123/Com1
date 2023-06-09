#include<stdio.h>
void main()
{
    int x;
    int type;
    int year;
    int buddha=0;

    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        scanf("%d%d",&type,&year);
        if(type==0)
        {
            if(year%4==0)
            {
                printf("%dAD is leap year\n",year);
            }
            else if(year%4!=0)
            {
                if(year%4==1)
                {
                    printf("%dAD is not leap year. The next leap year is %d.\n",year,year+3);
                }
                else if(year%4==2)
                {
                    printf("%dAD is not leap year. The next leap year is %d.\n",year,year+2);
                }
                else if(year%4==3)
                {
                    printf("%dAD is not leap year. The next leap year is %d.\n",year,year+1);
                }
            }
        }
        else if(type==1)
        {
            buddha=year-543;
            if(buddha%4==0)
            {
                printf("%dBE is leap year\n",year);
            }
            else if(buddha%4!=0)
            {
                if(buddha%4==1)
                {
                    printf("%dBE is not leap year. The next leap year is %d.\n",year,year+3);
                }
                else if(buddha%4==2)
                {
                    printf("%dBE is not leap year. The next leap year is %d.\n",year,year+2);
                }
                else if(buddha%4==3)
                {
                    printf("%dBE is not leap year. The next leap year is %d.\n",year,year+1);
                }
            }
        }
    }
}
