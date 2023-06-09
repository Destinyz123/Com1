#include<stdio.h>
int count_max(int* a,int x){
    int max=0;
    int count=0;
    for(int i=0;i<x;i++){
        if(a[i]>=max){
            max=a[i];
        }
    }
    for(int i=0;i<x;i++){
        if(max==a[i]){
            count++;
        }
    }
    printf("%d",count);
}
void main(){
    int x;

    scanf("%d",&x);
    int a[x];

    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    count_max(a,x);

}
