#include<stdio.h>
void main()
{

    int x;
    int y;
    int m;
    int n;
    int woodplatem;
    int logsm;
    int woodplaten;
    int logsn;
    int total_woodplate;
    int total_logs;

    scanf("%d%d",&x,&y);
    scanf("%d%d",&m,&n);
    woodplatem=m*2;
    logsm=m*6;
    woodplaten=n*1;
    logsn=n*4;
    total_woodplate=woodplatem+woodplaten;
    total_logs=logsm+logsn;
    if(m>=0 && n>=0)
    {
        if(x>=total_woodplate && y>=total_logs)
        {
            printf("Yes %d %d",x-total_woodplate,y-total_logs);
        }
        else if(x<=total_woodplate && y<=total_logs)
        {
            printf("No %d %d",total_woodplate-x,total_logs-y);
        }
        else if(x<=total_woodplate && y>=total_logs)
        {
            printf("No %d 0",total_woodplate-x);
        }
        else if(x>=total_woodplate && y<=total_logs)
        {
            printf("No 0 %d",total_logs-y);
        }
    }









}
