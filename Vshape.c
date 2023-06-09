#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n+1][n*2+1];
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<n*2+1; j++)
        {
            a[i][j]=-1;
        }
    }
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<n*2+1; j++)
        {
            if(i==j)
            {
                a[i][j]=i;
            }
            if(i+j==n*2)
            {
                a[i][j]=i;
            }
        }
    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<n*2+1;j++){
            if(a[i][j]==-1){
                printf(" ");
            }
            else{
                printf("%d",a[i][j]);
            }
        }
        printf("\n");
    }


}
