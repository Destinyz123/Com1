#include<stdio.h>
void main()
{
    int x;
    int min=50000;
    int max=0;

    for(;;)
    {
        scanf("%d",&x);
        if(x<=0)
        {
            break;
        }
        if(x>0)
        {
            if(x%2!=0)
            {
                if(x<min)
                {
                    min=x;
                }
                if(x>max)
                {
                    max=x;
                }
            }


        }

    }
    printf("%d\n%d\n%d",max,min,max-min);
}
