#include<stdio.h>
void main(){
    int x;
    int a[10];

    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    printf("%d",a[x/10%10]);
}
