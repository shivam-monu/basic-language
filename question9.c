#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the number of a is\n");
    scanf("%d",&a);
    printf("enter the number of b is\n");
    scanf("%d",&b);
    printf("enter the number of c is\n");
    scanf("%d",&c);
    printf("enter the number of d is\n");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf("the greater of all is %d",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("the greater of all is %d",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("the greater of all is %d",c);
    }
    else{
        printf("the greater of all is%d",d); 
    }
    
}