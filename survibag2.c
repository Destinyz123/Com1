#include<stdio.h>
void main()
{
    int m;
    int w;
    int f;
    int p;
    int f_mama=0;
    int f_water=0;
    int p_mama=0;
    int p_water=0;
    int total_mama=0;
    int total_water=0;
    int n;

    scanf("&d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d%d%d",&m,&w,&f,&p);

        f_mama=30*f;
        f_water=15*f;
        p_mama=12*p;
        p_water=4*p;

        total_mama=f_mama+p_mama;
        total_water=f_water+p_water;

        printf("%d%d",total_mama,total_water);
        if(total_mama<=m && total_water<=w)
        {
            printf("OK");
        }
        else{
            printf("Sorry");
        }
        total_mama=0;
        total_water=0;
        f_mama=0;
        f_water=0;
        p_mama=0;
        p_water=0;

    }
}
