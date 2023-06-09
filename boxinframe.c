#include<stdio.h>
void main()
{
    int x;

    scanf("%d",&x);

    for(int i=1; i<=x; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("*");

    for(int i=2;i<=x-1;i++){
        printf(" ");
    }
    printf("*");
    printf("\n");

    for(int i=2;i<=x-3;i++){
        printf("* ");
        for(int j=2;j<=x-3;j++){
            printf("*");
        }
        printf(" *\n");
    }
    printf("*");
    for(int i=2;i<=x-1;i++){
        printf(" ");
    }
    printf("*");
    printf("\n");

    for(int i=1;i<=x;i++){
        printf("*");
    }
}
