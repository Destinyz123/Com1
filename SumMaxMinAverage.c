#include<stdio.h>
#include<limits.h>
void main()
{
    int x;
    int y;
    int j=0;
    int max=INT_MIN;
    int min=INT_MAX;
    double sum_all=0.0;
    int sum_max=INT_MIN;
    int sum_min=INT_MAX;
    int sum=0;


    for(;;)
    {
        scanf("%d",&x);
        if(x<=0)
        {
            break;
        }
       j++;
        for(int i=1; i<=x; i++)
        {
            scanf("%d",&y);
            sum+=y;
        }
        if(sum>=sum_max)
        {
            sum_max=sum;
            max=j;
        }
        if(sum<=sum_min)
        {
            sum_min=sum;
            min=j;
        }
        sum_all+=sum;
        printf("%d\n",sum);
        sum=0;
    }

    printf("%d %d\n",max, sum_max);
    printf("%d %d\n",min, sum_min);
    printf("%.2lf",sum_all/j);
}
