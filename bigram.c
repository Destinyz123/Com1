#include<stdio.h>
void main()
{
    int x;
    int y;
    int bi1=0;
    int bi2=0;
    int bi3=0;
    int bi4=0;


    scanf("%d",&x);
    for(;;)
    {
        scanf("%d",&y);
        if(y!=0 && y!=1)
        {
            break;
        }
        if(x==0 && y==0)
        {
            bi1++;
        }
        else if(x==0 && y==1)
        {
            bi2++;
        }
        else if(x==1 && y==0)
        {
            bi3++;
        }
        else if(x==1 && x==1)
        {
            bi4++;
        }
        x=y;

    }
    printf("%d\n%d\n%d\n%d",bi1,bi2,bi3,bi4);
}
