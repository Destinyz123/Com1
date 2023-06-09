#include<stdio.h>
void main()
{
    int x;

    scanf("%d",&x);
    if(x>=1 && x<=99)
    {
        for(int i=1; i<=12; i++)
        {
            if(x*12<100)
            {
                printf("%d x %2d = %2d\n",x,i,x*i);
            }
            else if(x*12<1000)
            {
                printf("%d x %2d = %3d\n",x,i,x*i);
            }
            else if(x*12<10000)
            {
                printf("%d x %2d = %4d\n",x,i,x*i);
            }
        }
    }
    else{
        printf("Number is out of range");
    }


}
