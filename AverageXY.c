#include<stdio.h>
void main(){
    int x;
    int count=0;
    double sum=0;

    scanf("%d",&x);
    if(2<=x<=100000){
        int a[x];

    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    int y;
    int z;

    scanf("%d %d",&y,&z);
    for(int i=0;i<x;i++){
        int p=a[i];
        if(p>=y && p<=z){
            count++;
            sum+=p;
        }
    }
    if(count>0){
        printf("%d\n",count);
        printf("%.2lf",sum/count);
    }
    else{
        printf("0\nnone");
    }
    }


}
