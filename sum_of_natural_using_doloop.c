#include<stdio.h>
int main(){
    int i=0;
    int sum=0;
    do
    {
        sum+=i;
        i++;
    } while (i<=10);
    printf("the sum of first 10 natural number is%d",sum);
    
}