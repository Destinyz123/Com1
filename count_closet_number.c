#include<stdio.h>
#include<limits.h>
void main(){
    int x;
    int y;
    int diff=0;

    scanf("%d",&x);

    int a[x];

    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    int min_diff=INT_MAX;
    int count=0;

    scanf("%d",&y);
    for(int j=0;j<x;j++){
        if(a[j]>=y){
            diff=a[j]-y;
        }
        else{
            diff=y-a[j];
        }
        if(diff<min_diff){
            min_diff=diff;
            count=1;
        }
        else if(diff==min_diff){
            count++;
        }
    }
    printf("%d\n%d",min_diff,count);
}
