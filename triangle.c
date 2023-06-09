#include<stdio.h>
void main(){
    int n;
    int x;
    int y;
    int z;
    int i;

    scanf("%d",&n);
    while(i<=n){

        scanf("%d %d %d",&x,&y,&z);
        if(x+y>z){
            printf("triangle");
            i++;
        }
        else{
            printf("Not triangle");
            i++;
        }
    }
}
