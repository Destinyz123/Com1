#include<stdio.h>
void main(){
    int n;
    double cost=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m,c,b;
        scanf("%d",&m);
        for(int j=0;j<m;j++){
            scanf("%d %d",&c,&b);
            char symb;
            if(b==1){
                symb='-';
                cost+=8.5*c;
            }
            else if(b==0){
                symb='#';
                cost+=9.75*c;
            }
            for(int k=0;k<c;k++){
                printf("%c",symb);
            }
        }
        printf("\n");
    }
    printf("%.2lf",cost);
}
