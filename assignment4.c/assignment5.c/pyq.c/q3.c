#include<stdio.h>
int main()
{
    int a[] = {0,1,4,9,16};
    int *p, *q;
    int i,j,k,l,m,n;
    q = &a[4];
    p = q-4;
    i = *q;
    j = *p++;
    k = *--q;
    l = p[1];
    m = *(q-2);
    n = q-p;
    printf("%d %d %d %d %d %d",i,j,k,l,m,n);
    return 0;
}