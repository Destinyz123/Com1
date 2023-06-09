#include<stdio.h>
void main()
{
    int x;
    int y;
    int z;
    int mid;
    int total_result=0;

    scanf("%d%d",&x,&y);
    for(;;)
    {
        scanf("%d",&z);
        if(z<=0)
        {
            break;
        }
        if(x>y)
        {
            mid=y;
            y=x;
            x=mid;
        }
        if(z>=x && z<=y)
        {
            total_result+=z;
        }
    }
    printf("%d",total_result);
}
