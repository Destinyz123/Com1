#include<stdio.h>
void main(){
    int mn_ab1;
    int mn_ab2;
    int mn_ab3;
    int mn_ab4;
    int p_ab1;
    int p_ab2;
    int p_ab3;
    int p_ab4;
    int count=0;

    scanf("%d%d%d%d\n",&mn_ab1,&mn_ab2,&mn_ab3,&mn_ab4);
    scanf("%d%d%d%d",&p_ab1,&p_ab2,&p_ab3,&p_ab4);
    if(p_ab1>=mn_ab1){
        printf("1 ");
        count++;
    }
    if(p_ab2>=mn_ab2){
        printf("2 ");
        count++;
    }
    if(p_ab3>=mn_ab3){
        printf("3 ");
        count++;
    }
    if(p_ab4>=mn_ab4){
        printf("4 ");
        count++;
    }
    else if(p_ab1<mn_ab1 && p_ab2<mn_ab2 && p_ab4<mn_ab4 && p_ab3<mn_ab3){
        printf("0");
    }
    if(count<3){
        printf("\nfail");
    }
    else{
        printf("\npass");
    }
}
