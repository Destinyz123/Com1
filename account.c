#include<stdio.h>
void main()
{

    int income;
    int pos=0;
    int minus=0;
    int total_pos=0;
    int total_minus=0;

    for(;;)
    {
        scanf("%d",&income);
        if(income==0)
        {
            break;
        }
        if(income>0)
        {
            pos++;
            total_pos+=income;
        }
        else if(income<0)
        {
            minus++;
            total_minus+=income;
        }
    }
    printf("%d %d\n",pos,minus);
    printf("%d\n%d\n",total_pos,total_minus);

    if(total_pos>=total_minus*-1)
    {
        printf("debit");
    }
    else if(total_pos<total_minus*-1)
    {
        printf("credit");
    }
}
