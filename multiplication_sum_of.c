#include <stdio.h>
int main()
{
    int sum = 0;
    int n;
    printf("write a nomber:\n");
    scanf("%d", &n);
     for (int i = 0; i <= 10; i++)
    {
        sum += n * i;
    }
    printf("the sum of multiple:%d", sum);
}