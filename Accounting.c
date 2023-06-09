#include <stdio.h>
void main()
{


    int amount;
    int type;
    int count_income=0;
    int count_outcome=0;
    int total_income=0;
    int total_outcome=0;


    for(;;)
    {
        scanf("%d",&type);
        if(type==0)
        {
            break;
        }
        scanf("%d",&amount);
        if(type==1)
        {
            count_income++;
            total_income+=amount;
        }
        else
        {
            count_outcome++;
            total_outcome += amount;
        }

    }
    printf("%d %d\n",count_income,count_outcome);
    printf("%d %d %d",total_income,total_outcome,total_income-total_outcome);


















}
