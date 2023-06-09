#include<stdio.h>
void main(){
    int day;
    int a=0;
    int b=0;
    int c=0;
    int n;

    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&day);
        if(a<=b && a<=c){
            printf("A\n");
            a+=day;
        }
        else if(b<=c){
            printf("B\n");
            b+=day;
        }
        else{
            printf("C\n");
            c+=day;
        }
    }
}

