#include<stdio.h>
int main()
{
    int dist,meter,cm;
    float feet,inch;
    printf("Enter the distance between two cities(in km) : ");
    scanf("%d", &dist);
    meter=dist*1000;
    feet=dist*3280.8;
    inch=dist*39370.1;
    cm=dist*1000*100;
    printf("Distance in meter : %d \n", meter);
    printf("Distance in feet : %f \n", feet);
    printf("Distance in inch : %f \n", inch);
    printf("Distance in centimeter : %d \n", cm);
    return 0;
}