#include<stdio.h>
void main(){
    int x;
    int score_a=0;
    int score_b=0;

    scanf("%d",&x);
    int a[x];
    int b[x];
        for(int i=0;i<x;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<x;i++){
            scanf("%d",&b[i]);
        }
    for(int i=0; i<x;i++){
        int sa=a[i];
        int sb=b[i];
        if(sa>sb){
            score_a+=2;
        }
        else if(sb>sa){
            score_b+=2;
        }
        else{
            score_a++;
            score_b++;
        }
    }
    if(score_a>score_b){
        printf("Team 1 wins\nScore %d to %d",score_a,score_b);
    }
    else if(score_b>score_a){
        printf("Team 2 wins\nScore %d to %d",score_b,score_a);
    }
    else{
        printf("Draw game\nScore %d to %d",score_a,score_b);
    }
}
