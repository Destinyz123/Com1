#include <stdio.h>
void main()
{
    int k,k1,k2,s1,s2,g;
    scanf("%d%d%d%d%d%d",&k,&k1,&k2,&s1,&s2,&g);
    if(k1<k)
    {
        if(g==1)
        {
            if(s1>=s2 && s1>=9)
            {
                printf("1");
            }
            else if (s2>=9 && s1<9)
            {
                printf("2");
            }
            else
            {
                printf("0");
            }

        }
        else if(g==2)
        {
            if(s2>=s1 && s2>=9)
            {
                printf("2");
            }
            else if(s1>=9 && s2<9)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }
    else if(k2<k)
    {
        if(g==1)
        {
            if(s1>=s2 && s1>=9)
            {
                printf("1");
            }
            else if (s2>=9 && s1<9)
            {
                printf("2");
            }
            else
            {
                printf("0");
            }

        }
        else if(g==2)
        {
            if(s2>=s1 && s2>=9)
            {
                printf("2");
            }
            else if(s1>=9 && s2<9)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }



    }
    else if(k1>=k && k2>=k){
        printf("0");
    }

}
