#include<stdio.h>
void main()
{
    int n;
    float cost;
    float proceed;
    float total_cost=0;
    float total_proceed=0;

    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d",&cost,&proceed);
        printf("%.2f%%\n",((proceed-cost)/cost)*100);
        total_cost+=cost;
        total_proceed+=proceed;
    }
    if(total_proceed>=total_cost)
    {
        printf("profit %.2f%%",((total_proceed-total_cost)/total_cost)*100);
    }
    else
    {
        printf("loss %.2f%%",((total_proceed-total_cost)/total_cost)*100*-1);
    }
}
