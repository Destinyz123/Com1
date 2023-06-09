#include <stdio.h>
void main()
{
    int N;
    int x;
    int y;
    int z;
    scanf("%d",&N);
    if(N<=100000)
    {
        for(int i=1; i<=N; i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            if(x>=0 && x<=1000000)
            {
                if(y>=0 && y<=1000000)
                {
                    if(z>=0 && z<=1000000)
                    {
                        if(x==y && y==z )
                        {
                            printf("xyz\n");


                        }
                        else if(y==z)
                        {
                            printf("yz\n");
                        }
                        else if(x==z)
                        {
                            printf("xz\n");
                        }
                        else if(x==y)
                        {
                            printf("xy\n");
                        }
                        else if(x>y && x>z)
                        {
                            printf("x\n");
                        }
                        else if(y>x && y>z)
                        {
                            printf("y\n");
                        }
                        else if(z>x && z>y)
                        {
                            printf("z\n");
                        }
                    }
                }
            }




        }
    }
















}
