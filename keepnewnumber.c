#include<stdio.h>
int a[1000001];
int b[1000001];
void main()
{

    int i=0;

    for(;;)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
        i++;
    }
    int count =0;
    for(int j=0; j<i; j++)
    {
        int check = 1;
        for(int n=0; n<count; n++)
        {
            if(b[n]==a[j])  //2 3 4 5 a[j] = 2
            {
                check = 0;
            }
        }
        if(check==1)
        {
            b[count] = a[j]; // 2 3 4 5
            count++;
        }
    }
    printf("%d\n%d\n",i,count);
    for(int k=0; k<count; k++)
    {
        printf("%d ",b[k]);
    }

}
