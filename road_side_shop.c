#include<stdio.h>
void main(){
    int x,n;
    int center;
    int a[10000];
    int max=-1;
    scanf("%d %d",&x,&n);
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    for(center=n;center<x-n;center++){
        int sum=0;
        for(int i=center-n;i<=center+n;i++){
            sum+=a[i];
        }
        if(sum>max){
            max=sum;
        }
    }
    printf("%d", max);
}
