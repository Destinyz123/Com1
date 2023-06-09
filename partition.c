#include<stdio.h>
void main(){
    int x;
    int y;
    int ;

    scanf("%d %d",&x,&y);


    for(int i=1;i<=(x+1)*y+1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=y+1;i++){
        printf("*");
        for(int j=1;j<=x;j++){
            printf(" ");
        }

    }
    printf("\n");
    for(int i=1;i<=(x+1)*y+1;i++){
        printf("*");
}

}
