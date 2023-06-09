#include<stdio.h>
void main()
{
    int age;
    int serv;
    int salary;
    int count_p=0;

    for(;;)
    {
        scanf("%d",&age);
        if(age==-1)
        {
            break;
        }
        scanf("%d%d",&serv,&salary);
        if(age<18)
        {
            printf("Reject\n");
        }
        else if(age>=18)
        {
            if(serv==1)
            {
                printf("Reject\n");
            }
            else if(serv==2)
            {
                if(salary*12>300000)
                {
                    printf("Reject\n");
                }
                else if(salary*12<=300000)
                {
                    printf("Approve\n");
                    count_p++;
                }
            }
            else if(serv==3)
            {
                if(salary*12>300000)
                {
                    printf("Reject\n");
                }
                else if(salary*12<=300000)
                {
                    printf("Approve\n");
                    count_p++;
                }
            }
        }

    }
    printf("%d",count_p*7000);
}
