#include<stdio.h>
void main(){
    int m;
    int n;
    int a2=0;
    int b2=0;
    int total=0;
    int b=1;

    scanf("%d %d", &m, &n);
    for(int a=3;a<=m;){

        total+=a*b;
        a2=a+b;
        b2=a-b;
        a=a2;
        b=b2;
    }
    printf("%d",total);
}
