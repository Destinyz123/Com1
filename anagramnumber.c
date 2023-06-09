#include<stdio.h>
void main()
{

    int x;
    int y;
    int a[100];
    int b[100];
    int count_a=0;
    int count_b=0;

    for(int i=0;i<100;i++){
        a[i]=0;
        b[i]=0;
    }
    for(;;)
    {
        scanf("%d",&x);
        if(x<0)
        {
            break;
        }
        a[x]++;
    }
    for(;;)
    {
        scanf("%d",&y);
        if(y<0)
        {
            break;
        }
        b[y]++;
    }
    for(int i=0;i<100;i++){
        if(a[i]>0){
            count_a++;
        }
    }
    for(int i=0;i<100;i++){
        if(b[i]>0){
            count_b++;
        }
    }
    if(count_a==count_b){
        printf("A and B are anagrams\n");
    }
    else{
        printf("A and B are not anagrams\n");
    }
    printf("A %d\nB %d",count_a,count_b);
}

