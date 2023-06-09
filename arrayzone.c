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
    int sum1=0;
    for(int i=0;i<x/2;i++){
        for(int j=0;j<y/2;j++){
            sum1+=a[i][j];
        }
    }
    int sum2=0;
    for(int i=0;i<x/2;i++){
        for(int j=y/2;j<y;j++){
            sum2+=a[i][j];
        }
    }

    int sum3=0;
    for(int i=x/2;i<x;i++){
        for(int j=0;j<y/2;j++){
            sum3+=a[i][j];
        }
    }

    int sum4=0;
    for(int i=x/2;i<x;i++){
        for(int j=y/2;j<y;j++){
            sum4+=a[i][j];
        }
    }
    printf("%d %d\n%d %d",sum1,sum2,sum3,sum4);
}
