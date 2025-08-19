#include<stdio.h>
int main(){
    char ch;
    printf("the character is\n");
    scanf("%c",&ch);
    printf("the value of character is %d",ch);
    if(ch>=97 && ch<=122){
        printf("this character is lowercase\n");
    }
    else{
        printf("this character is not lowercase\n");
    }
}