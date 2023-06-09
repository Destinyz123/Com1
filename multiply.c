#include<stdio.h>
void main(){
    int x;
    int y;
    int z;
    int fake=0;

    scanf("%d %d %d", &x, &y, &z);
    if(x>y){
        fake=x;
        x=y;
        y=fake;
    }
    for(int i=x; i<=y;i++){
            printf("%d: ",i);
        for(int j=1;j<=z;j++){
            printf("%d ",i*j);
        }
    printf("\n");
    }
}
