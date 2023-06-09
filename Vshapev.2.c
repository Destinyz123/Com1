#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    int Maxspace;
    Maxspace=x*2-1;


    for(int i=0; i<=x; i++)
    {
        for(int spaceA=0; spaceA<i; spaceA++)
        {
            printf(" ");
        }
        printf("%d",i);
        for(int spaceB=0; spaceB<Maxspace; spaceB++)
        {
            printf(" ");
        }
        Maxspace-=2;
        if(i!=x)
        {
            printf("%d",i);
            printf("\n");
        }
    }

}
