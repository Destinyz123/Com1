#include<stdio.h>
void main(){
    int x;
    int a[50001];
    int sum=0;
    int avr=0;
    int more=0;
    int less=0;
    int equal=0;

    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++){
        sum += a[i];
    }
    avr=sum/x;

    for(int i=0;i<x;i++){
        if(a[i]>avr){
            more++;
        }
        else if(a[i]<avr){
            less++;
        }
        else{
            equal++;
        }
    }


    printf("%d\n%d %d %d",avr,more,less,equal);
}
