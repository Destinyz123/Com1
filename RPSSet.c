#include<stdio.h>
void main()
{
    int x;
    int count_a=0;
    int count_b=0;

    scanf("%d",&x);
    if(x>=2 || x<=5000)
    {
        int a[x];
        int b[x];

        for(int i=0; i<x; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0; i<x; i++)
        {
            scanf("%d",&b[i]);
        }
        for(int i=0; i<x; i++)
        {
            int team_a=a[i];
            int team_b=b[i];
            if(team_a==1)
            {
                if(team_b==2)
                {
                    count_b++;
                }
                else if(team_b==3)
                {
                    count_a++;
                }
                else if(team_b==1)
                {

                }
            }
            else if(team_a==2)
            {
                if(team_b==1)
                {
                    count_a++;
                }
                else if(team_b==3)
                {
                    count_b++;
                }
                else if(team_b==2)
                {

                }
            }
            else if(team_a==3)
            {
                if(team_b==1)
                {
                    count_b++;
                }
                else if(team_b==2)
                {
                    count_a++;
                }
                else if(team_b==3)
                {

                }
            }
        }
    }
    printf("%d %d\n",count_a,count_b);
    if(count_a>count_b)
    {
        printf("1");
    }
    else if(count_b>count_a)
    {
        printf("2");
    }
    else
    {
        printf("0");
    }
}
