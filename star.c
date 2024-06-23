#include<stdio.h>
int main(){
    int n,i=0,sum=0;
    printf("no of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
  
}