#include<stdio.h>
int main(){
    for(int i=0;i<16;i++){
        if(i==6)
        {
            continue;//skip this iteration now
           
        }
        printf("i is %d\n",i);
    }
    printf("for loop is done");
}