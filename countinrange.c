#include<stdio.h>
void main()
{

    int x;
    int y;
    int z;
    int count_average=0;
    int count_min=0;
    int count_max=0;
    int fake;


    scanf("%d%d",&x,&y);

    if(x!=y)
    {
        for(;;)
        {
            scanf("%d",&z);
            if(z==0)
            {
                break;
            }
            if(z<x && z>y)
            {
                fake=y;
                y=x;
                x=fake;
            }
            if(z>x && z<y)
            {
                count_average+=1;
            }
            else if(z<x && z<y)
            {
                count_min+=1;
            }
            else if(z>x && z>y)
            {
                count_max+=1;
            }


        }
    }
    printf("%d\n",count_average);
    printf("%d\n",count_min);
    printf("%d",count_max);

















}
