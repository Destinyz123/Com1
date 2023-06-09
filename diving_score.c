#include<stdio.h>
void main(){
    int x;
    int max=0;
    int sum=0;
    int min=11;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        int score;
        scanf("%d",&score);
        sum+=score;
        if(score>max){
            max=score;
        }
        if(score<min){
            min=score;
        }
    }
    if(x>3){
        sum=sum-min-max;
    }
    printf("%d",sum);
}
