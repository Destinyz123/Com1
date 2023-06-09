#include<stdio.h>
void main(){
    int favi;
    int faht;
    int weight;
    float T;
    int oxyg;
    int count_favi=0;
    int count_faht=0;

    scanf("%d%d%d%f%d",&favi,&faht,&weight,&T,&oxyg);
    if(T>=37.5 && oxyg<90){
        count_favi=3*weight;
        count_faht=count_favi*4+120;
    }
    else if(T>=37.5 && oxyg>=90){
        count_favi=2*weight;
        count_faht=count_favi*4+120;
    }
    else if(T<37.5 && oxyg<90){
        count_favi=2*weight;
        count_faht=count_favi*4+120;
    }
    else{
        count_favi=0;
        count_faht=120;
    }
    printf("%d %d\n",count_favi,count_faht);
    printf("%d %d\n",favi-count_favi,faht-count_faht);

}
