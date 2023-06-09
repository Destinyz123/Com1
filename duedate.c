#include<stdio.h>
void main()
{

    int k;
    int n;
    int od_shirt;
    int p_worker;
    int remain_shirt=0;
    int day=1;

    scanf("%d\n%d",&k,&n);
    p_worker=k*100;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&od_shirt);
        remain_shirt+=od_shirt;
        day=remain_shirt/p_worker;

        if(day*p_worker<remain_shirt)
        {
            day++;

        }

        printf("%d\n",day);

    }

}
