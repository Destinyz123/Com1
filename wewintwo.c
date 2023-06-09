#include<stdio.h>
void main()
{
    int age;
    int serv;
    int salary;
    int count_p=0;
    int n;
    int money;

    scanf("%d%d",&n,&money);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&age);
        if(age==-1)
        {
            break;
        }
        scanf("%d%d",&serv,&salary);
        if(age<18)
        {

        }
        else if(age>=18)
        {
            if(serv==1)
            {

            }
            else if(serv==2)
            {
                if(salary*12>300000)
                {

                }
                else if(salary*12<=300000)
                {

                    count_p++;
                }
            }
            else if(serv==3)
            {
                if(salary*12>300000)
                {

                }
                else if(salary*12<=300000)
                {

                    count_p++;
                }
            }
        }

    }
    if(count_p*7000<=money)
    {
        printf("OK");
    }
    else if(count_p*7000>money)
    {
        printf("%d",count_p*7000-money);
    }
}
