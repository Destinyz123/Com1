#include<stdio.h>
void main()
{
    int x;
    int y;
    int z;
    int add=0;

    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        scanf("%d %d",&y,&z);
        if(y>z)
        {
            add=y;
            y=z;
            z=add;
        }
        for(int j=y;j<=z;j++){
            printf("%d ",j);
        }
        printf("\n");
        }
}
