#include<stdio.h>

int isunique(int* a,int x){
    int check=1;
    int count=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(a[j]==a[i]&&i!=j){
                check=0;
                break;
            }
        }
    }
    if(check==1){
        return 1 ;
    }
    else{
        return 0 ;
    }

}
void main(){
    int x;
    scanf("%d",&x);
    int a[x];


    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",isunique(a,x));
}
