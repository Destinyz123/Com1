#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    int a[x];
    int i;
    int max=-1;
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    }
    int height;
    for(height=max;height>0;height--){
        for(i=0;i<x;i++){
            if(a[i]-height>=0){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
