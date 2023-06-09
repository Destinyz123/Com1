#include<stdio.h>
void main()
{
    int target;
    int consec=1;
    int max_consec=1;
    int x;

    scanf("%d",&target);
    int max_target=target;
    for(;;)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        if(x==target)
        {
            consec++;
            if(consec>max_consec)
            {
                max_consec = consec;
                max_target = target;
            }
        }
        else
            {
                consec = 1;
            }
        target = x;
    }
    printf("%d\n%d",max_consec,max_target);
}
