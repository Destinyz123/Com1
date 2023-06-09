#include<stdio.h>
void main()
{
    float human;
    float weight;
    float height;
    float BMI;
    float under=0;
    float w_ud=0;
    float normal=0;
    float w_nm=0;
    float over=0;
    float w_ov=0;
    float obes=0;
    float w_ob=0;

    scanf("%f",&human);
    for(int i=1; i<=human; i++)
    {
        scanf("%f%f",&weight,&height);

        BMI=weight/((height/100)*(height/100));
        if(BMI<18.5)
        {
            under++;
            w_ud+=weight;
        }
        else if(BMI<25)
        {
            normal++;
            w_nm+=weight;
        }
        else if(BMI<30)
        {
            over++;
            w_ov+=weight;
        }
        else
        {
            obes++;
            w_ob+=weight;
        }
    }
    //printf("%f",BMI);
    printf("Underweight %.0f %.2f %.2f%%\n",under,w_ud/under,(100/human)*under);
    printf("Normal weight %.0f %.2f %.2f%%\n",normal,w_nm/normal,(100/human)*normal);
    printf("Overweight %.0f %.2f %.2f%%\n",over,w_ov/over,(100/human)*over);
    printf("Obesity %.0f %.2f %.2f%%",obes,w_ob/obes,(100/human)*obes);
}
