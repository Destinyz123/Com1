#include<stdio.h>
void main()
{
    int type;
    int count=0;
    int porn=0;
    int ban;
    int stack=0;
    int max=0;

    for(;;)
    {
        scanf("%d",&type);
        if(type==-1)
        {
            break;
        }
        if(type==4)
        {

            porn++;
            count++;
            stack+=1;
        }
        else
        {
            count++;
            stack=0;
        }
        if(stack>max){
            max=stack;
        }

    }
    ban=(porn*100)/count;

    if(ban>=60){
        if(max<3){
            printf("The user was warned");
        }
        else if(max>=3){
            printf("The user was banned");
        }
    }
    else if(ban<60){
        if(max>=3){
            printf("The user was warned");
        }
        else if(max<3){
            printf("Pass");
        }
    }
    else{

    }

}
