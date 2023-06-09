#include<stdio.h>
void main(){
    int m;
    int w;
    int f;
    int p;
    int f_mama=0;
    int f_water=0;
    int p_mama=0;
    int p_water=0;
    int total_mama=0;
    int total_water=0;

    scanf("%d%d",&m,&w);
    scanf("%d%d",&f,&p);

    f_mama=30*f;
    f_water=15*f;
    p_mama=12*p;
    p_water=4*p;

    total_mama=f_mama+p_mama;
    total_water=f_water+p_water;

    if(total_mama<=m && total_water<=w){
        printf("Mama 0 Water 0");
    }
    else if(total_mama<=m && total_water>w){
        printf("Mama 0 Water %d",total_water-w);
    }
    else if(total_mama>m && total_water<=w){
        printf("Mama %d Water 0",total_mama-m);
    }
    else if(total_mama>m && total_water>w){
        printf("Mama %d Water %d",total_mama-m,total_water-w);
    }


}
