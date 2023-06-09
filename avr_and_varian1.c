#include<stdio.h>
    double a[8];
double average()
{
    double sum=0;
    for(int j=0; j<8; j++)
    {
        sum+=a[j];
    }
    double avg=sum/8;
    return avg;
}
double variance(double avg){
    double sum=0;
    for(int i=0; i<8; i++)
    {
        sum+=(a[i]-avg)*(a[i]-avg);
    }
    double var=sum/(8-1);
    return var;
    }
void main()
{
    for(int i=0; i<8; i++)
    {
        scanf("%lf",&a[i]);
    }
    double avg = average();
    double var = variance(avg);

    printf("%.2lf ",avg);
    printf("%.2lf",var);
}

