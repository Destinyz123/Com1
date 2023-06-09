#include<stdio.h>
void main()
{
    int count_pop;
    int count_thai=0;
    int count_taiwan=0;
    int count_malay=0;
    int count_fin=0;
    int pop;

    scanf("%d\n",&count_pop);

    for(int i=1; i<=count_pop; i++)
    {
        scanf("%d",&pop);
        if(pop==1)
        {
            count_thai++;
        }
        if(pop==2)
        {
            count_taiwan++;
        }
        if(pop==3)
        {
            count_malay++;
        }
        if(pop==4)
        {
            count_fin++;
        }
    }
    if(count_thai>count_taiwan && count_thai>count_malay && count_thai>count_fin){
        printf("Thailand won with a score of %d",count_thai);
    }
    else if(count_taiwan>count_thai && count_taiwan>count_malay && count_taiwan>count_fin){
        printf("Taiwan won with a score of %d",count_taiwan);
    }
    else if(count_malay>count_thai && count_malay>count_taiwan && count_malay>count_fin){
        printf("Malaysia won with a score of %d",count_malay);
    }
    else if(count_fin>count_thai && count_fin>count_taiwan && count_fin>count_malay){
        printf("Finland won with a score of %d",count_fin);
    }
}
