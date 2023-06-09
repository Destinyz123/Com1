#include<stdio.h>
void main(){
    int x;
    int y;
    int num;
    int max=0;
    int i_max=0;

    scanf("%d %d",&x,&y);
    int a[101];
    for(int i=1;i<=x;i++){
        a[i]=0;
    }

    for(int i=1;i<=y;i++){
        scanf("%d",&num);
        a[num]++;
    }
    for(int i=1;i<=x;i++){
        if(a[i]>=max){
            max=a[i];
            i_max=i;
        }
    }
    printf("%d\n%d",i_max,max);
}
