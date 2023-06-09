#include<stdio.h>
void main(){
    int x,n;
    scanf("%d %d",&x,&n);
    char a[x+1][n+1];

    for(int i=1;i<=x;i++){
        for(int j=1;j<=n;j++){
            a[i][j]='_';
        }
    }
    int y;
    int m,c;
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        scanf("%d %d",&m,&c);
        a[m][c]='x';
    }
    for(int i=1;i<=x;i++){
        for(int j=1;j<=n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
