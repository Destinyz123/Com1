#include<stdio.h>
void main()
{
    int n;
    int h_work;
    int wage=0;
    int fire=0;

    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(fire==3)
        {
            break;
        }
        scanf("%d",&h_work);
        if(h_work>=4 && h_work<8)
        {
            wage+=150;
            fire=0;
        }
        else if(h_work>=8 && h_work<=12)
        {
            wage+=300+((h_work-8)*50);
            fire=0;
        }
        else if(h_work<4)
        {
            fire++;
        }
        else if(h_work>12)
        {
            wage+=500;
            fire=0;
        }
    }
    printf("%d",wage);

}
