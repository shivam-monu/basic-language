#include<stdio.h>
int main(){
    int n;
    int product=1;
    printf("enter the number\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        product=product*i;
    }
    printf("the product%d\n",product);
}