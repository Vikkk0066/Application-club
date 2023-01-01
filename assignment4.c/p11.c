#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,rt1,rt2;
    printf("Enter the values of a,b,c: ");
    scanf("%lf %lf %lf", &a,&b,&c);
    
    rt1=(-b+sqrt(b*b-4*a*c))/(2*a);
    rt2=(-b-sqrt(b*b-4*a*c))/(2*a);

    printf("first root is: %lf \n", rt1);
    printf("second root is: %lf \n", rt2);
    return 0;
}