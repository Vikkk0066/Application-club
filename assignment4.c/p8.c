#include<stdio.h>
int main()
{
    int total_sp,total_pro,cost_price;
    float cost_price1;
    printf("Enter total selling price and total profit of 15 items: ");
    scanf("%d %d", &total_sp, &total_pro);
    cost_price = total_sp - total_pro;
    cost_price1 = cost_price/15;
    printf("Cost price of one item is: %f", cost_price1);
    return 0;
}