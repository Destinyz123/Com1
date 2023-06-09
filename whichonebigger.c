#include<stdio.h>
void main(){
    int x;
    int y;
    int sum_less=0;
    int sum_more=0;

    scanf("%d",&x);

    int a[x];

    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);

    for(int j=0;j<x;j++){
        if(a[j]<y){
            sum_less+=a[j];
        }
        else if(a[j]>y){
            sum_more+=a[j];
        }
    }
    if(sum_less>=sum_more){
        printf("%d",sum_less);
    }
    else{
        printf("%d",sum_more);
    }

}
