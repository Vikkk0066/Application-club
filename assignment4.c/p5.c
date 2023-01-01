#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    ++a;
    printf("Value of a after pre-increment: %d \n", a);
    b++;
    printf("Value of b after post-increment: %d \n", b);
    --c;
    printf("Value of c after pre-decrement: %d \n", c);
    d--;
    printf("Value of d after post-decrement: %d \n", d);
    return 0;
}