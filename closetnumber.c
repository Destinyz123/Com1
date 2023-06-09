#include<stdio.h>
void main()
{

    int target;
    int n=8;
    int closet;


    int min_diff=999999;
    int minx=0;
    scanf("%d",&target);
    for(int i=1; i<=n; i++)
    {

        //int diff=closet-target;
        scanf("%d",&closet);
        int diff=closet-target;
        if(diff<0)
        {
            diff*=-1;
        }
        if(diff<min_diff)
        {
            min_diff=diff;
            minx=closet;
        }
    }
    printf("%d",minx);




















}
