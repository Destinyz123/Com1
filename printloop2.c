#include <stdio.h>
void main()
{
    int N;


    scanf("%d",&N);
    if(N>0)
    {
        for(int i=1; i<=N; i++)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        printf("Invalid input");
    }
}
