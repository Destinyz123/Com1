#include<stdio.h>
void main()
{
    int x;
    int y;
    int size=0;

    scanf("%d",&x);
    int a[x][2];

    for(int i=0;i<x;i++){
        scanf("%d",&y);
        int count=0;
        for(int j=0;j<size;j++){
            if(y==a[j][0]){
                count=1;
                a[j][1]++;
            }
        }
        if(count==0){
            a[size][0]=y;
            a[size][1]=1;
            size++;
        }
    }
    printf("%d\n",size);
    for(int n=0;n<size;n++){
        printf("%d %d\n",a[n][0],a[n][1]);
}
}

