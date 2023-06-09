#include<stdio.h>
void main()
{
    int x;
    int a[501];
    int i=0;

    for(;;)
    {
        scanf("%d",&x);
        if(x<0 || x>9)
        {
            break;
        }
        a[i]=x;
        i++;
    }
    for(int j=0; j<i; j++)
    {
        for(int n=i; n>j+1; n--)
        {
            printf(" ");
        }
        for(int c=0; c<=j; c++)
        {
            printf("%d",a[j]);
        }
        printf("\n");
    }
}
