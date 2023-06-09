#include<stdio.h>
void main()
{
    int x;
    int target;
    int count_target=0;
    int count=0;
    int max=0;

    scanf("%d",&target);
    for(;;)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        if(x==target)
        {
            count++;
            count_target++;
            if(count_target>max)
            {
                max=count_target;
            }
        }

        else
        {
            count_target=0;
        }
    }
    printf("%d\n",max);
    printf("%d",count);

}
