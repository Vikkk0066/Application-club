#include<stdio.h>
int main()
{
    int acc_no,credit_limit;
    float beg_bal,total_charge,total_credit,new_bal;
    printf("Enter accounnt number:");
    scanf("%d \n", &acc_no);
    printf("Enter begginning balance: ");
    scanf("%f \n", &beg_bal);
    printf("Enter total charge: ");
    scanf("%f \n", &total_charge);
    printf("Enter limit credit: ");
    scanf("%d \n", &total_credit);

    new_bal=(beg_bal+total_charge-total_credit);
    if(new_bal>credit_limit)
    printf("Credit limit exceeded");
    else
    printf("credit limit does not exceed");
    return 0;

}