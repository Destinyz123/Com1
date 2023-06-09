#include<stdio.h>
void main()
{
    int x;
    int y;
    int true=0;

    scanf("%d",&x);
    int a[x];
    for(int i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);
    for(int i=0; i<x; i++)
    {
        if(a[i]==y)
        {
            printf("%d ",i+1);
            true++;
        }
    }
    if(true==0){
        printf("0");
    }
}
