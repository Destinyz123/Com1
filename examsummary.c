#include<stdio.h>
void main()
{
    int mn_ab1;
    int mn_ab2;
    int mn_ab3;
    int mn_ab4;
    int n;
    int ab1;
    int ab2;
    int ab3;
    int ab4;
    int p_pass=0;
    int p_ab1=0;
    int p_ab2=0;
    int p_ab3=0;
    int p_ab4=0;
    int count;


    scanf("%d %d %d %d",&mn_ab1,&mn_ab2,&mn_ab3,&mn_ab4);
    scanf("%d",&n);
    if(n<=100000)
    {
        for(int i=1; i<=n; i++)
        {
            count = 0;
            scanf("%d %d %d %d",&ab1,&ab2,&ab3,&ab4);
            if(ab1>=mn_ab1)
            {
                count++;
                p_ab1++;
            }
            if(ab2>=mn_ab2)
            {
                count++;
                p_ab2++;
            }
            if(ab3>=mn_ab3)
            {
                count++;
                p_ab3++;
            }
            if(ab4>=mn_ab4)
            {
                count++;
                p_ab4++;
            }
            if(count<3)
            {
                printf("fail\n");
            }
            else
            {
                printf("pass\n");
                p_pass++;
            }

        }
    }
    printf("%d\n",p_pass);
    printf("%d %d %d %d",p_ab1,p_ab2,p_ab3,p_ab4);
}
