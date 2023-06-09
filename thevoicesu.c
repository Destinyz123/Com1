#include<stdio.h>
void main(){
    int n;
    int k;
    int sex;
    int p1;
    int p2;
    int c1=0;
    int c2=0;

    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d%d%d",&sex,&p1,&p2);
        if(sex==1){
            if(p1>=9 && c1<k){
                printf("%d 1\n",i);
                c1+=1;
            }
            else if(p2>=9 && c2<k){
                printf("%d 2\n",i);
                c2+=1;
            }
        }
        else if(sex==2){
            if(p2>=9 && c2<k){
                printf("%d 2\n",i);
                c2+=1;
            }
            else if(p1>=9 && c1<k){
                printf("%d 1\n",i);
                c1+=1;
            }
        }
    }
}
