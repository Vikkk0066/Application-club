// Task_1 (Jan 1, 2023)
// pyramid of * pattern of size n

#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the size of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
        printf(" *");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}