#include<stdio.h>
    int a[1000000];
void main(){
    int x;
    int i,j;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
    }

    int max=-1;
    int max_i_value=-1;
    for(j=0;j<x;j++){
        int count=1;
        int value=a[j];
        for(i=j+1;i<x;i++){
            if(value==a[i]){
                count++;
            }
        }
        if(count>max){
            max=count;
            max_i_value=value;
        }
        else if(count==max && value>max_i_value){
            max_i_value = value;
        }
    }
    printf("%d\n%d",max_i_value,max);
}
