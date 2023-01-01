#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("new value of a: %d\n",a);
    printf("new value of b: %d", b);
    return 0;
}