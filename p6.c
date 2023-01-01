#include<stdio.h>
int main()
{
    float temp,temp2;
    printf("Enter the teperature of city(in fahrenheit) : ");
    scanf("%f",&temp);
    temp2=(temp-32)*5/9;
    printf("temperature in celcius : %d", temp2);
    return 0;

}