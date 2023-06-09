#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);

    int MAXspace;

    if(n%2==0){
        MAXspace=n-1;
    }
    else{
        MAXspace=n-2;
    }

    for(int i=0;i<=n;i++){
        if(i<n/2){

            for(int spaceB=0;spaceB<i;spaceB++){
                printf(" ");
            }
            printf("%d",i);

            for(int space=0;space<MAXspace;space++){
                printf(" ");
            }
            MAXspace-=2;
            printf("%d",i);
            printf("\n");
        }
        else{
            for(int space=0;space<n/2;space++){
                printf(" ");
            }
            printf("%d",i);
            printf("\n");
        }
    }
}
