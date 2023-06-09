#include<stdio.h>
void main(){
  int x;
  int y;
  int z;
  int s;

  scanf("%d%d%d%d", &x, &y, &z, &s);
  for(int i=y; i<=s;i++){
    printf("%d x %d = %d",x,i,i*x);
    printf("\n");
  }
    for(int i=x+1;i<z;i++){
        for(int j=1;j<=s;j++){
            printf("%d x %d = %d",i,j,i*j);
            printf("\n");
        }
    }
    for(int i=1;i<=y;i++){

         printf("%d x %d = %d",z,i,z*i);
         printf("\n");

    }
}
