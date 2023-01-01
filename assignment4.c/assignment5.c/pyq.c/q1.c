#include<stdio.h>
int main()
{
    int theNum,total;
    total=1;
    theNum=5;
    while(theNum>1)
    {
        total *= --theNum;
    }
    printf("%d", total);
    return 0;
}