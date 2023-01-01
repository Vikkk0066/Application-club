#include<stdio.h>
int main()
{
    int a,b,div,quo;
    scanf("%d %d", &a,&b);
    div=a/b;
    quo=a%b;
    printf("quotient: %d \n", div);
    printf("remainder: %d", quo);
    return 0;
}