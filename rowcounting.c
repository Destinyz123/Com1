#include<stdio.h>
void main(){
    int x;
    int y;
    int count=1;

    scanf("%d %d",&x,&y);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
         printf("%d ",count);
         count++;
        }
        printf("\n");
    }

}
