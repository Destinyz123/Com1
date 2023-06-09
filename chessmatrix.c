#include<stdio.h>
void main(){
    int x;
    int y;

    scanf("%d %d",&x,&y);
    int a[x][y];

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int z;
    scanf("%d",&z);

    for(int i=0;i<x;i++){
        if(i%2==0){
            for(int j=0;j<y;j++){
                if(j%2==0){
                    printf("%d ",a[i][j]);
                }
                else{
                    printf("%d ",a[i][j]+z);
                }
            }
            printf("\n");
        }
        else{
            for(int j=0;j<y;j++){
                if(j%2==0){
                    printf("%d ",a[i][j]+z);
                }
                else{
                    printf("%d ",a[i][j]);
                }
            }
            printf("\n");
        }
        }
    }

