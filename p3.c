#include<stdio.h>
int main()
{
    int basic_salary;
    printf("Enter the basic salary: ");
    scanf("%d", &basic_salary);
    int dearness=basic_salary*0.4;
    int rent=basic_salary*0.2;
    int gross=basic_salary+dearness+rent;
    printf("Gross salary is : %d", gross);
    return 0;
}