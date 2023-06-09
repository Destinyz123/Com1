#include<stdio.h>
void main(){
    int num;
    int a[11];
    int i=0;

    for(int i=0;i<11;i++){
        a[i]=0;
    }

    for(;;){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        a[num]++;
        i++;
    }
    for(int j=0;j<11;j++){
        if(a[j]>0){
        printf("%.2lf%%\n",(double)a[j]*100/i);
        }
    }
}
