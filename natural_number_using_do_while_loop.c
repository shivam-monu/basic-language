#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter the n:");
    scanf("%d",&n);
    do
    {
        printf("the natural number is:%d\n",i);
        i++;
    } while (i<=n);
    return 0;
    
}