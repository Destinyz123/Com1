#include<stdio.h>
void main()
{
    int x;
    int count_f=99999999999;

    scanf("%d",&x);
    if(x%2==0)
    {
        printf("No even");
    }
    else
    {
        for(int i=3; i<=x; i++)
        {
            if(x%i==0)
            {
                if(i<x && i<=1001)
                {
                    count_f=i;
                    printf("No can divided by %d",count_f);
                    break;
                }
                 else
                {
                     printf("Yes");
                    break;
                }

            }

        }

    }

}
