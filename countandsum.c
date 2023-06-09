#include<stdio.h>
void main()
{
    int k;
    int x;
    int countmod=0;
    int countx=0;
    int sum=0;


    scanf("%d",&k);
    for(;;)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        countx++;
        if(x>0)
        {
            if(x%k==0)
            {
                countmod++;
                sum+=x;
            }
        }
    }
    printf("%d\n",countx);
        printf("%d\n",countmod);
        printf("%d\n",sum);

}
