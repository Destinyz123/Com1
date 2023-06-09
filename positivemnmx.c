#include<stdio.h>
void main(){

    int x;
    int max=0;
    int min=999999999;

    for(int i=1;i<=8;i++){
        scanf("%d",&x);
        if(x>0){
            if(x>=max){
                max=x;
            }
            if(x<=min){
                min=x;
            }
        }
    }
    printf("%d\n%d",max,min);



















}
