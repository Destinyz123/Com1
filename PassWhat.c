#include <stdio.h>
void main()
{

    int ab1_mn;
    int ab2_mn;
    int ab3_mn;
    int ab4_mn;
    int p_ab1;
    int p_ab2;
    int p_ab3;
    int p_ab4;

    scanf("%d%d%d%d",&ab1_mn,&ab2_mn,&ab3_mn,&ab4_mn);
    scanf("%d%d%d%d",&p_ab1,&p_ab2,&p_ab3,&p_ab4);
    if(p_ab1>=ab1_mn)
    {
        printf("1 ");
    }
    if(p_ab2>=ab2_mn)
    {
        printf("2 ");
    }
    if(p_ab3>=ab3_mn)
    {
        printf("3 ");
    }
    if(p_ab4>=ab4_mn)
    {
        printf("4");
    }
}































