#include<stdio.h>
int main()
{
    int a,rem,num;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    rem=a%10;
    a=a/10;
    num=rem*100;
    rem=a%10;
    a=a/10;
    num=num+rem*10;
    rem=a%10;
    num=num+rem;
    printf("Reversed number is: %d", num);
    return 0;
}