#include<stdio.h>
int main(){
    int n;
    int i;
    int k;

    printf("choose  table");
    scanf("%d",&n);
    for ( i=10;i>=1;i--){
         k=n*i;
         printf("%d x %d=%d\n",n,i,k);
        }

    }
    