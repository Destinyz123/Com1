#include<stdio.h>
void main(){
    int x;
    int y;
    int z;

    scanf("%d%d%d",&x,&y,&z);
    if(x==y && y==z){
        printf("Equilateral Triangle");
    }
    else if(x==y || x==z || z==y){
        printf("Isosceles Triangle");
    }
    else{
        printf("Scalene Triangle");
    }
}
