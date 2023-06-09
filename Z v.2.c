#include<stdio.h>
void main(){
    int n;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                printf("%d ",j%10);
            }
            else if(i==n-1){
                printf("%d ",(((n*2)-2)+j)%10);
            }
            else if(j==n-i-1){
                printf("%d",((n+i)-1)%10);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
