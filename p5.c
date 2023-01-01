#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter the marks of sub1: \n");
    scanf("%d",&sub1);

    printf("Enter the marks of sub2: \n");
    scanf("%d",&sub2);

    printf("Enter the marks of sub3: \n");
    scanf("%d",&sub3);

    printf("Enter the marks of sub4: \n");
    scanf("%d",&sub4);

    printf("Enter the marks of sub5: \n");
    scanf("%d",&sub5);
    
    int aggr=sub1+sub2+sub3+sub4+sub5;
    int percent=(sub1+sub2+sub3+sub4+sub5)/5;
    
    printf("Aggregate marks is: %d\n", aggr);
    printf("Percentage is :%d \n", percent);
    return 0;
}