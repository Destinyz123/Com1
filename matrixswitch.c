#include<stdio.h>
void main()
{
    int x;
    int y;

    scanf("%d",&x);
    int a[x][x];

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&y);
    if(y==1)
    {
        for(int i=0; i<x; i++)
        {
            for(int j=x/2; j<x; j++)
            {
                printf("%d ",a[i][j]);
            }
            for(int s=0; s<x/2; s++)
            {
                printf("%d ",a[i][s]);
            }
            printf("\n");
        }
    }
    else if(y==2)
    {
        for(int i=x/2; i<x; i++)
        {
            for(int j=0; j<x; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<x/2;i++){
            for(int j=0;j<x;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }

}
