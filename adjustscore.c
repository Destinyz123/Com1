#include<stdio.h>
void main(){
    int x;

    scanf("%d",&x);
    int a[x];

    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    double y,z;
    scanf("%lf %lf",&y,&z);

    for(int i=0;i<x;i++){
        printf("%.1lf ",(a[i]*z)/y);
    }


}
