#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x,&y);

    int a[x+1][y+1];

    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int n,z;
    scanf("%d %d",&n,&z);
    double sum=0;
    for(int i=1;i<=y;i++){
        sum+=a[n][i]*a[z][i];
    }
    printf("%.0lf",sum);
}
