#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[500][500];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[i][j]=-1;
        }
    }
    int val=0;
    for(int i=0; i<n; i++)
    {
        a[0][i]=val;
        val=(val+1)%10;
    }
    for(int i=1; i<n-1; i++)
    {
        a[i][n-i-1]=val;
        val=(val+1)%10;
    }
    for(int i=0; i<n; i++)
    {
        a[n-1][i]=val;
        val=(val+1)%10;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]<0)
            {
                printf("  ");
            }
            else
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
}
