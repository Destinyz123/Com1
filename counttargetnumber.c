#include<stdio.h>
void main(){
    int x;
    int count=0;
    int target;

    scanf("%d",&target);
    for(;;){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x==target){
            count++;
        }
    }
    if(count>0){
        printf("%d",count);
    }
    else{
        printf("None");
    }

}
