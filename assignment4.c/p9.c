#include<stdio.h>
int main()
{
    int a,rem,num1,num2;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    rem=a%10;
    a=a/10;
    num1=rem;
    rem=a%10;
    a=a/10;
    rem=a%10;
    num2=rem;
    printf("Sum of first and last digit is: %d", num1+num2);
    return 0;
}