#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    int num;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    num=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1){
                a[i][j]=num%10;
                num--;
            }
        }
    }
    num=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
              a[i][j]=num%10;
                num++;
            }
        }
    }
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=n;j++){
            if(j=n){
                a[i][j]=num%10;
                num++;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || j==i){
                printf("%d ",a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
