#include<stdio.h>
void main()
{
    int x;
    int y;
    int z;

    scanf("%d %d %d",&x,&y,&z);
    if(x<y && x<z && y<z){
        printf("%d %d %d",x,y,z);
    }
    else if(z<y && z<x && y<x){
        printf("%d %d %d",z,y,x);
    }
    else if(z<y && z<x && x<y){
        printf("%d %d %d",z,x,y);
    }
    else if(x<y && x<z && z<y){
        printf("%d %d %d",x,z,y);
    }
    else if(y<x && y<z && z<x){
        printf("%d %d %d",y,z,x);
    }
    else if(y<x && y<z && x<z){
        printf("%d %d %d",y,x,z);
    }
    else if(x==y && y==z){
        printf("%d %d %d",x,y,z);
    }
    else if(x==y && y<z){
        printf("%d %d %d",x,y,z);
    }
    else if(x==y && z<y){
        printf("%d %d %d",z,x,y);
    }
    else if(z==x && z<y){
        printf("%d %d %d",x,z,y);
    }
    else if(z==x && z>y){
        printf("%d %d %d",y,x,z);
    }
    else if(z==y && z<x){
        printf("%d %d %d",z,y,x);
    }
    else if(z==y && z>x){
        printf("%d %d %d",x,y,z);
    }
}
