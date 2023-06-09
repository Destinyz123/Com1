#include<stdio.h>
void main()
{
    int N, K, i;
    scanf("%d %d", &N, &K);

    int sum = 0;
    for(i = 0; i < N; ++i)
    {
        int income, expense;
        scanf("%d %d", &income, &expense);
        sum += income - expense;
    }

    if(sum > 0)
    {
        printf("Profit %d\n", sum);
    }
    else if(sum == 0)
    {
        printf("Breakeven\n");
    }
    else
    {
        printf("Loss %d\n", -sum);
    }

    if(sum >= K)
    {
        printf("Expand");
    }
    else if(sum >= K / 2)
    {
        printf("Wait and see\n");
    }
    else
    {
        printf("Not expand");
    }
    if(sum < K && sum >= K / 2)
    {
        int sum=0;
        for(i = 0; i < N; ++i)
        {
            int income,expense;
            scanf("%d %d", &income, &expense);
            sum += income - expense;
        }

        if(sum > 0)
        {
            printf("Profit %d\n", sum);
        }
        else if(sum == 0)
        {
            printf("Breakeven\n");
        }
        else
        {
            printf("Loss %d\n", -sum);
        }

        if(sum >= K)
        {
            printf("Expand");
        }
        else
        {
            printf("Not expand");
        }
    }

}
