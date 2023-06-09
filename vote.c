#include<stdio.h>
void main(){
    int n;
    int k;
    int count_max=0;
    int point=0;

    scanf("%d %d",&n,&k);

    int a[101];
    int b[k+1];
    for(int i=1;i<=k;i++){
        b[i]=0;
    }
    for(int i=1;i<=n;i++){
        a[i]=0;
    }

    for(int i=1;i<=k;i++){
        scanf("%d",&b[i]);
    }
    for(int i=1;i<=k;i++){
        a[b[i]]++;
    }
    /*for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }*/
    for(int i=1;i<=n;i++){
        if(a[i]>=point){
            count_max=i;
            point=a[i];
        }
    }
    printf("%d\n%d ",count_max,point);
}
