#include<stdio.h>
int main()
{
    int b,h,area;
    printf("Enter base and height of triangle:");
    scanf("%d %d", &b,&h);
    area=(b*h)/2;
    printf("Area of triangle is: %d", area);
    return 0;
}