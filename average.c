#include<stdio.h>
void main()
{

    int n;
    int x;
    float count=0;
    float average;
    int round=0;


    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if(x<=0)
        {
            printf("Not positive\n");
            break;
        }
        else
        {
            count+=x;
            round++;
        }

    }
    average=count/round;


    printf("%.4f",average);




}
