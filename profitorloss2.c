#include<stdio.h>
void main()
{
    int n;
    float cost;
    float proceed;
    float total_cost=0;
    float total_proceed=0;
    float max_profit=0;
    float min_profit=9999999;
    float max_loss=0;
    float min_loss=-9999999;
    float cal=0;
    int i_mxp=0;
    int i_mnp=0;
    int i_mxl=0;
    int i_mnl=0;


    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d",&cost,&proceed);
        cal=((proceed-cost)/cost)*100;
        total_cost+=cost;
        total_proceed+=proceed;
        if(cal>=0)
        {
            if(cal<min_profit)
            {
                min_profit=cal;
                i_mnp=i;
            }
            if(cal>max_profit)
            {
                max_profit=cal;
                i_mxp=i;
            }
        }
        else if(cal<0)
        {
            if(cal>min_loss)
            {
                min_loss=cal;
                i_mnl=i;
            }
            if(cal<max_loss)
            {
                max_loss=cal;
                i_mxl=i;
            }
        }
    }
    if(total_proceed>=total_cost)
    {
        printf("profit %.2f%%\n",((total_proceed-total_cost)/total_cost)*100);
    }
    else
    {
        printf("loss %.2f%%\n",((total_proceed-total_cost)/total_cost)*100*-1);
    }
    printf("item %d max profit %.2f\n",i_mxp,max_profit);
    printf("item %d min profit %.2f\n",i_mnp,min_profit);
    printf("item %d max loss %.2f\n",i_mxl,max_loss*-1);
    printf("item %d min loss %.2f\n",i_mnl,min_loss*-1);
}
