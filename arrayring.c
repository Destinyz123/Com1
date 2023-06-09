#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int last=a[n/2][n/2];
    printf("%d\n",last);
    for(int i=1;i<=n/2;i++){
        int sum=0;
        for(int r=n/2-i;r<=n/2+i;r++){
            for(int c=n/2-i;c<=n/2+i;c++){
                sum+=a[r][c];

            }

        }
        printf("%d\n",sum-last);
        last=sum;
    }
}
