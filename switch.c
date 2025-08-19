#include<stdio.h>
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("you entered 1\n");
        case 2:
        printf("you entered 2\n");
        case 3:
        printf("you entered 3\n");
        default:
        printf("nothing matched");
    }
}