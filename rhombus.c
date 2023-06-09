#include <stdio.h>
void main()
{
    int x;

    scanf("%d",&x);
    int space=x/2;
    for(int i=1; i<=x;)
    {
        for(int k=space; k>0; k--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        i+=2;
        space--;
        printf("\n");
    }
    space=1;
    for(int i=x-2; i>=1;)
    {
        for(int t=1; t<=space; t++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        i-=2;
        space++;
        printf("\n");
    }
}
