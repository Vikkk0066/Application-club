#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("new value of a: %d\n",a);
    printf("new value of b: %d", b);
    return 0;
}