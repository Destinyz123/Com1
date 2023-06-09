#include<stdio.h>
double a[100];
double average(int x)
{
    double sum=0;
    for(int j=0; j<x; j++)
    {
        sum+=a[j];
    }
    double avg=sum/x;
    return avg;
}
double variance(double avg,int x){
    double sum=0;
    for(int i=0; i<x; i++)
    {
        sum+=(a[i]-avg)*(a[i]-avg);
    }
    double var=sum/(x-1);
    return var;
    }
void main()
{
    int x;
    scanf("%d",&x);
    for(int i=0; i<x; i++)
    {
        scanf("%lf",&a[i]);
    }
    double avg = average(x);
    double var = variance(avg,x);

    printf("%.2lf ",avg);
    printf("%.2lf",var);
}
