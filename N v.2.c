#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);

    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(j==0){
                printf("%d ",(x-i)%10);
            }
            else if(i==j){
                printf("%d ",(x+i)%10);
            }
            else if(j==x-1){
                printf("%d",(((x*3)-2)-i)%10);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
