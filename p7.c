#include<stdio.h>
int main()
{
    float b,h,rad,area_rect,peri_rect,area_circle,peri_circle;
    printf("Enter the breadth and height of rectangle: ");
    scanf("%f%f", &b, &h );
    printf("Enter the radius of circle: ");
    scanf("%f", &rad);
    area_rect=b*h;
    peri_rect=2*(b+h);
    area_circle=3.14*rad*rad;
    peri_circle=2*3.14*rad;
    printf("Area of rectangle is: %f \n", area_rect);
    printf("Perimeter of rectangle: %f \n", peri_rect);
    printf("Area of circle is: %f \n", area_circle);
    printf("Perimeter of circle is: %f \n", peri_circle);
    return 0;
}